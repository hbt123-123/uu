// rea decompile_all
// name: FUN_1001c4078
// address: 0x1001c4078
// body: available
// range: 0x1001c4078-0x1001c448f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001c417c) */

uint FUN_1001c4078(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long extraout_x8;
  uint uVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auStack_b0 [16];
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  long lStack_70;
  byte local_68;
  
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar14 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar10 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_90 + lVar10;
  local_88 = param_1;
  uStack_80 = param_2;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar13);
  FUN_10009ff0c();
  uVar11 = 0;
  puVar5 = puVar13;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (puVar13,0,PTR___sSSN_1009957f8,lVar4);
  (**(code **)(lVar14 + 8))(puVar13,lVar3);
  uVar12 = 0;
  if (0xe < uVar11 >> 0x3c) goto LAB_1001c446c;
  uVar6 = 0;
  __s10Foundation11JSONDecoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONDecoderCACycfc();
  uVar7 = uVar6;
  FUN_1001c4540();
  __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
            (&local_88,&DAT_1009a2c58,puVar5,uVar11,&DAT_1009a2c58,uVar7);
  _swift_release(uVar6);
  bVar2 = local_68;
  uVar6 = uStack_80;
  uVar7 = local_88;
  bVar1 = local_68 >> 6;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      _swift_bridgeObjectRetain(local_78);
      uVar8 = uVar7;
      FUN_1001c3bfc(uVar7,uVar6,local_78);
      uVar12 = (uint)uVar8;
      FUN_1001c4580(uVar7,uVar6,local_78,lStack_70,local_68);
      FUN_1001c4580(uVar7,uVar6,local_78,lStack_70,local_68);
      FUN_100006cc8(puVar5,uVar11);
      goto LAB_1001c446c;
    }
    _swift_retain(local_88);
    FUN_1001c3e90();
    FUN_1001c4580(uVar7,uVar6,local_78,lStack_70,bVar2);
LAB_1001c43cc:
    FUN_1001c4580(uVar7,uVar6,local_78,lStack_70,bVar2);
    FUN_100006cc8(puVar5,uVar11);
    uVar12 = 0;
  }
  else {
    if (bVar1 == 2) {
      uVar9 = 0x6e776f6474756873;
      local_68 = local_68 & 1;
      if (((local_78 != 0x6e776f6474756873) || (lStack_70 != -0x1800000000000000)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x6e776f6474756873,0xe800000000000000,local_78,lStack_70,0), (uVar9 & 1) == 0))
      goto LAB_1001c43cc;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined8 **)((long)auStack_a0 + lVar10) = &local_88;
      FUN_1003fb48c(FUN_1001c45d0,auStack_b0 + lVar10,0xd0000000000000a0,0x800000010089cf20,
                    0xd000000000000016,0x800000010089cff0,0x95,0);
      lVar10 = local_78;
      FUN_1001c339c(local_78,lStack_70);
      if (lVar10 == 0) {
        FUN_1001c4580(uVar7,uVar6,local_78,lStack_70,bVar2);
        goto LAB_1001c445c;
      }
      FUN_1000fb164();
      FUN_1001c4580(uVar7,uVar6,local_78,lStack_70,bVar2);
LAB_1001c442c:
      FUN_100006cc8(puVar5,uVar11);
      _swift_release(lVar10);
    }
    else {
      lVar10 = 0x725f656369766564;
      FUN_1001c339c(0x725f656369766564,0xed0000746f6f6265);
      if (lVar10 != 0) {
        FUN_1000faf30();
        goto LAB_1001c442c;
      }
LAB_1001c445c:
      FUN_100006cc8(puVar5,uVar11);
    }
    uVar12 = 1;
  }
LAB_1001c446c:
  return uVar12 & 1;
}

