// rea decompile_all
// name: FUN_1002dc8e4
// address: 0x1002dc8e4
// body: available
// range: 0x1002dc8e4-0x1002dcd9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1002dc8e4(undefined8 param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined *puVar7;
  undefined8 ***pppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 uVar10;
  undefined8 ****ppppuVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 ****ppppuVar14;
  undefined8 ***pppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 **local_98;
  undefined8 uStack_90;
  undefined8 ***local_88;
  undefined8 ***pppuStack_80;
  undefined8 ***local_70;
  undefined8 ***local_68;
  
  local_70 = (undefined8 ****)0x0;
  local_68 = (undefined8 ***)0xe000000000000000;
  __s10Foundation10URLRequestV10httpMethodSSSgvg();
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1002dcd9c);
    (*pcVar4)();
  }
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(param_2);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  ppppuVar5 = (undefined8 ****)0x0;
  __s10Foundation10URLRequestVMa();
  ppppuVar16 = ppppuVar5;
  FUN_1002dfb14();
  __ss23CustomStringConvertibleP11descriptionSSvgTj(ppppuVar5);
  ppppuVar9 = ppppuVar16;
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease();
  pppuVar3 = local_68;
  pppuVar8 = local_70;
  __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
  ppppuVar5 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100995ea0;
  if (ppppuVar16 != (undefined8 ****)0x0) {
    local_70 = (undefined8 ***)PTR___swiftEmptyArrayStorage_100995ea0;
    ppppuVar9 = &local_70;
    FUN_1002bb634();
    _swift_bridgeObjectRelease(ppppuVar16);
    ppppuVar5 = (undefined8 ****)local_70;
  }
  puVar2 = PTR___sSSN_1009957f8;
  if (ppppuVar5[2] == (undefined8 ***)0x0) {
    _swift_bridgeObjectRelease();
    pppuVar15 = (undefined8 ***)0xef656e6f4e203a5d;
    ppppuVar16 = (undefined8 ****)0x737265646165485b;
  }
  else {
    local_70 = ppppuVar5;
    _swift_bridgeObjectRetain(ppppuVar5);
    FUN_1002bbe8c(&local_70);
    pppuVar15 = local_70;
    ppppuVar16 = (undefined8 ****)local_70;
    FUN_1002bcd08();
    _swift_bridgeObjectRelease(pppuVar15);
    uVar10 = 0xe100000000000000;
    __sSS9repeating5countS2S_SitcfC(0x20,0xe100000000000000,4);
    local_88 = (undefined8 ***)0xa;
    pppuStack_80 = (undefined8 ***)0xe100000000000000;
    local_98 = (undefined8 ***)0xa;
    uStack_90 = 0xe100000000000000;
    local_70 = ppppuVar16;
    local_68 = ppppuVar9;
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease();
    uVar13 = uStack_90;
    FUN_1002c6438();
    ppppuVar16 = &local_88;
    ppppuVar6 = (undefined8 ****)&local_98;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (ppppuVar16,ppppuVar6,0,0,0,1,puVar2,puVar2,puVar2,uVar10,uVar10,uVar10);
    _swift_bridgeObjectRelease(ppppuVar9);
    _swift_bridgeObjectRelease(uVar13);
    local_70 = (undefined8 ***)0x0;
    local_68 = (undefined8 ***)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x11);
    _swift_bridgeObjectRelease(local_68);
    local_70 = (undefined8 ****)0x737265646165485b;
    local_68 = (undefined8 ***)0xef202020200a3a5d;
    ppppuVar9 = ppppuVar6;
    __sSS6appendyySSF(ppppuVar16);
    _swift_bridgeObjectRelease(ppppuVar5);
    _swift_bridgeObjectRelease();
    ppppuVar5 = ppppuVar6;
    pppuVar15 = local_68;
    ppppuVar16 = (undefined8 ****)local_70;
  }
  __s10Foundation10URLRequestV8httpBodyAA4DataVSgvg();
  ppppuVar6 = ppppuVar5;
  __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
  ppppuVar14 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100995ea0;
  if (ppppuVar6 != (undefined8 ****)0x0) {
    local_70 = (undefined8 ***)PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_1002bb634();
    _swift_bridgeObjectRelease(ppppuVar6);
    ppppuVar14 = (undefined8 ****)local_70;
  }
  puVar7 = &DAT_100a833d8;
  FUN_100004bb4(&DAT_100a833d8,&DAT_1008178b0);
  _swift_initStaticObject();
  ppppuVar6 = ppppuVar5;
  ppppuVar11 = ppppuVar9;
  FUN_1002dc268(ppppuVar5,ppppuVar9,ppppuVar14,puVar7,100000);
  _swift_bridgeObjectRelease(ppppuVar14);
  FUN_100006cc8(ppppuVar5,ppppuVar9);
  _swift_arrayDestroy(puVar7 + 0x20,3,puVar2);
  local_70 = (undefined8 ***)0x0;
  local_68 = (undefined8 ***)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x1b);
  _swift_bridgeObjectRelease(local_68);
  local_70 = (undefined8 ***)0x747365757165525b;
  local_68 = (undefined8 ***)0xeb00000000203a5d;
  __sSS6appendyySSF(pppuVar8,pppuVar3);
  _swift_bridgeObjectRelease(pppuVar3);
  __sSS6appendyySSF(0x202020200a,0xe500000000000000);
  uVar10 = 0xe100000000000000;
  __sSS9repeating5countS2S_SitcfC(0x20,0xe100000000000000,4);
  local_98 = (undefined8 ***)0xa;
  uStack_90 = 0xe100000000000000;
  local_a8 = 10;
  uStack_a0 = 0xe100000000000000;
  local_88 = ppppuVar16;
  pppuStack_80 = pppuVar15;
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease();
  uVar13 = uStack_a0;
  FUN_1002c6438();
  pppuVar8 = &local_98;
  puVar12 = &local_a8;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (pppuVar8,puVar12,0,0,0,1,puVar2,puVar2,puVar2,uVar10,uVar10,uVar10);
  _swift_bridgeObjectRelease(pppuVar15);
  _swift_bridgeObjectRelease(uVar13);
  __sSS6appendyySSF(pppuVar8,puVar12);
  _swift_bridgeObjectRelease(puVar12);
  __sSS6appendyySSF(0x202020200a,0xe500000000000000);
  uVar13 = 0xe100000000000000;
  __sSS9repeating5countS2S_SitcfC(0x20,0xe100000000000000,4);
  local_98 = (undefined8 ***)0xa;
  uStack_90 = 0xe100000000000000;
  local_a8 = 10;
  uStack_a0 = 0xe100000000000000;
  local_88 = ppppuVar6;
  pppuStack_80 = ppppuVar11;
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar13);
  uVar13 = uStack_a0;
  pppuVar8 = &local_98;
  puVar12 = &local_a8;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (pppuVar8,puVar12,0,0,0,1,puVar2,puVar2,puVar2,uVar10,uVar10,uVar10);
  _swift_bridgeObjectRelease(ppppuVar11);
  _swift_bridgeObjectRelease(uVar13);
  __sSS6appendyySSF(pppuVar8,puVar12);
  _swift_bridgeObjectRelease(puVar12);
  auVar1._8_8_ = local_68;
  auVar1._0_8_ = local_70;
  return auVar1;
}

