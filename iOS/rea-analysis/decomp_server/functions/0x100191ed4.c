// rea decompile_all
// name: FUN_100191ed4
// address: 0x100191ed4
// body: available
// range: 0x100191ed4-0x10019222b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100191ed4(double param_1,undefined4 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long extraout_x8;
  long lVar15;
  undefined1 auStack_d0 [16];
  undefined8 auStack_c0 [2];
  undefined4 auStack_b0 [4];
  undefined4 local_a0;
  undefined4 uStack_9c;
  long lStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  long lStack_78;
  
  lVar6 = 0;
  __s10Foundation4DateVMa();
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_80 = 0;
  lStack_78 = -0x2000000000000000;
  lVar7 = param_3;
  __sSS5countSivg(param_3,param_4);
  uVar14 = param_5;
  if (4 < lVar7) {
    _swift_bridgeObjectRetain(param_4);
    uVar8 = 5;
    uVar13 = param_4;
    FUN_100075d40(5,param_3,param_4);
    _swift_bridgeObjectRelease(param_4);
    uVar14 = param_5;
    __sSS14_fromSubstringySSSshFZ(uVar8,param_3,uVar13,param_5);
    _swift_bridgeObjectRelease(param_5);
    local_80 = uVar8;
    lStack_78 = param_3;
  }
  __s10Foundation4DateVACycfC((long)&local_a0 + lVar1);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar15 + 8))((long)&local_a0 + lVar1,lVar6);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100192224);
    (*pcVar5)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100192228);
    (*pcVar5)();
  }
  if (param_1 < 9.223372036854776e+18) {
    local_90 = (undefined *)(long)param_1;
    puVar9 = PTR___sSiN_100995968;
    puVar12 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj();
    local_90 = puVar9;
    puStack_88 = puVar12;
    _swift_bridgeObjectRetain(puVar12);
    puVar10 = puVar9;
    __sSS5countSivg(puVar9,puVar12);
    _swift_bridgeObjectRelease(puVar12);
    if (4 < (long)puVar10) {
      _swift_bridgeObjectRetain(puVar12);
      puVar11 = (undefined *)0x5;
      puVar10 = puVar12;
      FUN_10018b790(5,puVar9,puVar12);
      _swift_bridgeObjectRelease(puVar12);
      __sSS14_fromSubstringySSSshFZ(puVar11,puVar9,puVar10,uVar14);
      _swift_bridgeObjectRelease(puVar12);
      _swift_bridgeObjectRelease(uVar14);
      local_90 = puVar11;
      puStack_88 = puVar9;
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 **)((long)auStack_c0 + lVar1) = &local_80;
    *(undefined ***)((long)auStack_c0 + lVar1 + 8) = &local_90;
    *(undefined4 *)((long)auStack_b0 + lVar1) = param_2;
    FUN_1003fb45c(FUN_10019248c,auStack_d0 + lVar1,0xd0000000000000ad,0x8000000100890a70,
                  0xd000000000000025,0x8000000100898fe0,0xa0,7);
    lVar7 = lStack_78;
    puVar10 = puStack_88;
    puVar9 = local_90;
    local_a0 = (undefined4)local_80;
    uStack_9c = (undefined4)((ulong)local_80 >> 0x20);
    lStack_98 = lStack_78;
    _swift_bridgeObjectRetain(lStack_78);
    __sSS6appendyySSF(puVar9,puVar10);
    lVar1 = lStack_98;
    uVar14 = CONCAT44(uStack_9c,local_a0);
    local_a0 = 0x7275752e;
    uStack_9c = 0x746f6d65;
    lStack_98 = 0xea00000000005f65;
    __sSS6appendyySSF(uVar14,lVar1);
    _swift_bridgeObjectRelease(lVar1);
    lVar1 = lStack_98;
    uVar4 = uStack_9c;
    uVar3 = local_a0;
    puVar9 = PTR___ss6UInt32VN_100995dc0;
    puVar12 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
    local_a0 = param_2;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
    local_a0 = uVar3;
    uStack_9c = uVar4;
    lStack_98 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSS6appendyySSF(puVar9,puVar12);
    _swift_bridgeObjectRelease(lVar7);
    _swift_bridgeObjectRelease(puVar10);
    _swift_bridgeObjectRelease(lVar1);
    _swift_bridgeObjectRelease(puVar12);
    auVar2._4_4_ = uStack_9c;
    auVar2._0_4_ = local_a0;
    auVar2._8_8_ = lStack_98;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10019222c);
  (*pcVar5)();
}

