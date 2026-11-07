// rea decompile_all
// name: FUN_1000d2818
// address: 0x1000d2818
// body: available
// range: 0x1000d2818-0x1000d2a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000d2818(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  ulong uVar8;
  long extraout_x12;
  long unaff_x21;
  long lVar9;
  undefined1 *puVar10;
  undefined1 auStack_90 [8];
  long local_88;
  undefined8 uStack_80;
  long local_78;
  long local_70;
  undefined *local_68;
  
  puVar6 = &DAT_100a776d8;
  FUN_100004bb4(&DAT_100a776d8,&DAT_10080c358);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_90 + -extraout_x8;
  puVar6 = &DAT_100a75b08;
  FUN_100004bb4(&DAT_100a75b08,&DAT_10080c340);
  lVar9 = *(long *)(puVar6 + -8);
  local_68 = puVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_78 = lVar7 - extraout_x12;
  lVar7 = *(long *)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar7 != 0) {
    lVar2 = 0;
    __s10Foundation3URLVMa();
    uVar8 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
    param_1 = param_1 + (uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff));
    lVar2 = *(long *)(*(long *)(lVar2 + -8) + 0x48);
    puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
    local_88 = lVar2;
    uStack_80 = param_3;
    do {
      FUN_1000d0b38(puVar10,param_1,param_2,param_3);
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(puVar6);
        return puVar6;
      }
      puVar3 = puVar10;
      (**(code **)(lVar9 + 0x30))(puVar10,1,local_68);
      lVar1 = local_78;
      if ((int)puVar3 == 1) {
        FUN_100040bb4(puVar10,&DAT_100a776d8,&DAT_10080c358);
      }
      else {
        FUN_1000a00a8(puVar10,local_78,&DAT_100a75b08,&DAT_10080c340);
        FUN_1000a00a8(lVar1,local_70,&DAT_100a75b08,&DAT_10080c340);
        puVar4 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar5 = puVar6;
        if (((ulong)puVar4 & 1) == 0) {
          puVar5 = (undefined *)0x0;
          FUN_100035904(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
        }
        uVar8 = *(ulong *)(puVar5 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar8) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
          FUN_100035904(puVar6,uVar8 + 1,1,puVar5);
        }
        *(ulong *)(puVar6 + 0x10) = uVar8 + 1;
        FUN_1000a00a8(local_70,puVar6 + *(long *)(lVar9 + 0x48) * uVar8 +
                                        ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                                        ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)),
                      &DAT_100a75b08,&DAT_10080c340);
        lVar2 = local_88;
        param_3 = uStack_80;
      }
      param_1 = param_1 + lVar2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return puVar6;
}

