// rea decompile_all
// name: FUN_1007d5a34
// address: 0x1007d5a34
// body: available
// range: 0x1007d5a34-0x1007d5c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1007d5a34(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_70 [8];
  undefined *local_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = 0;
  __s10Foundation13URLComponentsVMa();
  lVar10 = *(long *)(lVar2 + -8);
  puVar9 = auStack_70 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100abd468;
  FUN_1007b4550();
  puVar7 = puVar9 + -(*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = unaff_x20 + _TtC6Sentry12UrlSanitized::components;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  FUN_1007d5db8(lVar1,puVar7);
  puVar3 = puVar7;
  (**(code **)(lVar10 + 0x30))(puVar7,1,lVar2);
  if ((int)puVar3 == 0) {
    puVar3 = puVar7;
    (**(code **)(lVar10 + 0x10))(puVar9,puVar7,lVar2);
    FUN_1004060f4();
    __s10Foundation13URLComponentsV6stringSSSgvg();
    (**(code **)(lVar10 + 8))(puVar9,lVar2);
    if (puVar3 != (undefined *)0x0) {
      _swift_bridgeObjectRetain(puVar3);
      puVar4 = (undefined *)0x3f;
      uVar5 = 0;
      FUN_1007d5248(0x3f,0xe100000000000000,puVar7,puVar3);
      _swift_bridgeObjectRelease(puVar3);
      if ((uVar5 & 1) == 0) {
LAB_1007d5b94:
        puVar6 = puVar4;
        _swift_bridgeObjectRetain(puVar3);
        local_68 = (undefined *)0xf;
        puVar8 = puVar3;
        __sSSySsSnySS5IndexVGcig(0xf,puVar6,puVar7,puVar3);
        _swift_bridgeObjectRelease(puVar3);
        __sSS14_fromSubstringySSSshFZ(local_68,puVar6,puVar7,puVar8);
        _swift_bridgeObjectRelease(puVar3);
        _swift_bridgeObjectRelease(puVar8);
      }
      else {
        _swift_bridgeObjectRetain(puVar3);
        puVar4 = (undefined *)0x23;
        uVar5 = 0;
        FUN_1007d5248(0x23,0xe100000000000000,puVar7,puVar3);
        puVar8 = puVar3;
        _swift_bridgeObjectRelease(puVar3);
        puVar6 = puVar3;
        local_68 = puVar7;
        if ((uVar5 & 1) == 0) goto LAB_1007d5b94;
      }
      puStack_60 = puVar6;
      FUN_10009ff0c();
      puVar7 = PTR___sSSN_1009957f8;
      __sSy10FoundationE23removingPercentEncodingSSSgvg(PTR___sSSN_1009957f8,puVar8);
      _swift_bridgeObjectRelease(puVar6);
      goto LAB_1007d5c24;
    }
  }
  else {
    FUN_1004060f4(puVar7);
    puVar7 = (undefined *)0x0;
  }
  puVar8 = (undefined *)0x0;
LAB_1007d5c24:
  auVar11._8_8_ = puVar8;
  auVar11._0_8_ = puVar7;
  return auVar11;
}

