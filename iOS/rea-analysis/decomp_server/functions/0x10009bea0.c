// rea decompile_all
// name: FUN_10009bea0
// address: 0x10009bea0
// body: available
// range: 0x10009bea0-0x10009c0f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009c0f0 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009bea0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_f0 [16];
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  char *local_c0;
  char *local_b8;
  long local_b0;
  undefined1 auStack_a8 [72];
  
  puVar7 = &DAT_100a750f8;
  FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
  _swift_initStaticObject();
  puVar8 = puVar7;
  FUN_10012839c();
  _swift_arrayDestroy(puVar7 + 0x20,3,PTR___sSSN_1009957f8);
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    _swift_bridgeObjectRelease(puVar8);
    return;
  }
  lVar14 = 0;
  local_b0 = param_1 + 0x20;
  local_b8 = "rver11LogUploader";
  local_c0 = "lt log directories";
  do {
    puVar1 = (ulong *)(local_b0 + lVar14 * 0x20);
    uVar2 = *puVar1;
    uVar4 = puVar1[1];
    uVar3 = puVar1[2];
    uVar5 = puVar1[3];
    if (*(long *)(puVar8 + 0x10) == 0) {
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
    }
    else {
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(puVar8 + 0x28));
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      puVar9 = auStack_a8;
      __sSS4hash4intoys6HasherVz_tF(puVar9,uVar2,uVar4);
      __ss6HasherV9_finalizeSiyF();
      uVar11 = -1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
      uVar12 = (ulong)puVar9 & (uVar11 ^ 0xffffffffffffffff);
      if ((*(ulong *)(puVar8 + (uVar12 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar12 & 0x3f) & 1) !=
          0) {
        do {
          puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar12 * 0x10);
          uVar10 = *puVar1;
          uVar6 = puVar1[1];
          if ((uVar10 == uVar2 && uVar6 == uVar4) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar10,uVar6,uVar2,uVar4,0), (uVar10 & 1) != 0)) {
            _swift_bridgeObjectRelease(uVar5);
            _swift_bridgeObjectRelease(uVar4);
            goto LAB_10009bfc8;
          }
          uVar12 = uVar12 + 1 & ~uVar11;
        } while ((*(ulong *)(puVar8 + (uVar12 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar12 & 0x3f) &
                 1) != 0);
      }
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_e0 = uVar2;
    uStack_d8 = uVar4;
    local_d0 = uVar3;
    uStack_c8 = uVar5;
    FUN_1003fb48c(FUN_10009ffa8,auStack_f0,0xd000000000000093,(ulong)local_b8 | 0x8000000000000000,
                  0xd00000000000001f,(ulong)local_c0 | 0x8000000000000000,200,0);
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(uVar4);
LAB_10009bfc8:
    lVar14 = lVar14 + 1;
    if (lVar14 == lVar13) {
      _swift_bridgeObjectRelease(puVar8);
      return;
    }
  } while( true );
}

