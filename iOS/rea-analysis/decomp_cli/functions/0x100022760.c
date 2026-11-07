// rea decompile_all
// name: FUN_100022760
// address: 0x100022760
// body: available
// range: 0x100022760-0x100022a63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100022760(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  FILE *pFVar6;
  undefined *puVar7;
  FILE *pFVar8;
  FILE *pFVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined2 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *local_80;
  FILE *apFStack_78 [3];
  
  lVar3 = 0;
  uVar12 = param_3;
  uVar11 = param_4;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100102c60;
  puVar7 = &DAT_1000cf6d0;
  FUN_10000eb08(&DAT_100102c60,&DAT_1000cf6d0);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined2 *)(lVar3 - extraout_x8_00);
  if (param_1 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100022a60);
    (*pcVar2)();
  }
  if (param_1 < 0x80000000) {
    DAT_100102c58 = (undefined4)param_1;
    DAT_100102c5c = 0;
    lVar5 = param_1;
    FUN_10000e9bc();
    if (((uint)lVar5 & 0xff) == 0x17) {
      uVar12 = 0;
      uVar11 = 0;
    }
    else {
      FUN_100002f00();
      _swift_bridgeObjectRelease(puVar7);
    }
    if ((param_4 & 1) == 0) {
      apFStack_78[1] = (FILE *)0x203a726f727245;
      apFStack_78[2] = (FILE *)0xe700000000000000;
      __sSS6appendyySSF(param_2,param_3);
      if (uVar11 != 0) {
        local_80 = (undefined *)0x203a746e69480a;
        apFStack_78[0] = (FILE *)0xe700000000000000;
        __sSS6appendyySSF(uVar12,uVar11);
        _swift_bridgeObjectRelease(uVar11);
        pFVar8 = apFStack_78[0];
        __sSS6appendyySSF(local_80,apFStack_78[0]);
        _swift_bridgeObjectRelease(pFVar8);
      }
      pFVar6 = apFStack_78[2];
      local_80 = (undefined *)apFStack_78[1];
      apFStack_78[0] = apFStack_78[2];
      _swift_bridgeObjectRetain(apFStack_78[2]);
      __sSS6appendyySSF(10,0xe100000000000000);
      _swift_bridgeObjectRelease();
      pFVar8 = apFStack_78[0];
      pFVar9 = (FILE *)local_80;
      __s6Darwin6stderrSpySo7__sFILEVGvg();
      __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(pFVar9,pFVar8);
      _swift_bridgeObjectRelease(pFVar8);
      _fputs((char *)((long)pFVar9 + 0x20),pFVar6);
    }
    else {
      *puVar10 = 0x100;
      *(long *)(puVar10 + 4) = param_1;
      *(undefined8 *)(puVar10 + 8) = param_2;
      *(undefined8 *)(puVar10 + 0xc) = param_3;
      *(undefined8 *)(puVar10 + 0x10) = uVar12;
      *(ulong *)(puVar10 + 0x14) = uVar11;
      iVar1 = *(int *)(puVar4 + 0x34);
      _swift_bridgeObjectRetain(param_3);
      __s10Foundation4DateVACycfC((long)puVar10 + (long)iVar1);
      puVar4 = &DAT_100102c60;
      pFVar8 = (FILE *)&DAT_1000cf6d0;
      FUN_100022520(&DAT_100102c60,&DAT_1000cf6d0,&DAT_100102c68);
      __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar3);
      puVar7 = puVar4;
      pFVar9 = pFVar8;
      __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(puVar4,pFVar8,lVar3);
      FUN_100020a0c(puVar4,pFVar8);
      apFStack_78[1] = (FILE *)(undefined *)0x0;
      if (pFVar9 != (FILE *)0x0) {
        apFStack_78[1] = (FILE *)puVar7;
      }
      pFVar8 = (FILE *)0xe000000000000000;
      if (pFVar9 != (FILE *)0x0) {
        pFVar8 = pFVar9;
      }
      apFStack_78[2] = pFVar8;
      _swift_bridgeObjectRetain(pFVar8);
      __sSS6appendyySSF(10,0xe100000000000000);
      _swift_bridgeObjectRelease();
      pFVar6 = apFStack_78[2];
      pFVar9 = apFStack_78[1];
      __s6Darwin6stderrSpySo7__sFILEVGvg();
      __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(pFVar9,pFVar6);
      _swift_bridgeObjectRelease(pFVar6);
      _fputs((char *)((long)pFVar9 + 0x20),pFVar8);
      FUN_10001fc18(puVar10,&DAT_100102c60,&DAT_1000cf6d0);
    }
    _swift_release(pFVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100022a64);
  (*pcVar2)();
}

