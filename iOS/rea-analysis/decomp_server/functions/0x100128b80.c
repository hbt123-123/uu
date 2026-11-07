// rea decompile_all
// name: FUN_100128b80
// address: 0x100128b80
// body: available
// range: 0x100128b80-0x100128e3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100128b80(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 auStack_110 [16];
  undefined *local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  
  if (param_5 == 3) {
    lVar8 = param_2[2];
    if (lVar8 == 0) {
      _swift_bridgeObjectRetain(param_2);
      FUN_100008184(param_3,param_4);
      _swift_bridgeObjectRelease(param_2);
      puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      local_d8 = param_1;
      _swift_bridgeObjectRetain(param_2);
      local_d0 = param_3;
      uStack_c8 = param_4;
      FUN_100008184(param_3,param_4);
      local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_10006ffd0(0,lVar8,0);
      puVar4 = PTR___sSSN_1009957f8;
      local_e0 = param_2;
      do {
        puVar9 = local_68;
        local_78 = param_2[4];
        uVar2 = param_2[5];
        uVar3 = *(undefined4 *)(param_2 + 6);
        uStack_b8 = param_2[8];
        local_c0 = param_2[7];
        uStack_a8 = param_2[10];
        local_b0 = param_2[9];
        local_88 = 0x2f;
        local_80 = 0xe100000000000000;
        local_98 = 0x5c;
        uStack_90 = 0xe100000000000000;
        uStack_70 = uVar2;
        _swift_bridgeObjectRetain(uVar2);
        uVar5 = local_b0;
        FUN_100008184(local_b0,uStack_a8);
        FUN_10009ff0c();
        puVar6 = &local_88;
        puVar7 = &local_98;
        local_100 = puVar4;
        local_f8 = (undefined8 *)uVar5;
        local_f0 = uVar5;
        local_e8 = uVar5;
        __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                  (puVar6,puVar7,0,0,0,1,puVar4,puVar4);
        _swift_bridgeObjectRelease(uVar2);
        uVar1 = *(ulong *)(puVar9 + 0x10);
        local_68 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
          FUN_10006ffd0(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
        }
        puVar9 = local_68;
        *(ulong *)(local_68 + 0x10) = uVar1 + 1;
        *(undefined8 **)(local_68 + uVar1 * 0x38 + 0x20) = puVar6;
        *(undefined8 **)(local_68 + uVar1 * 0x38 + 0x28) = puVar7;
        *(undefined4 *)(local_68 + uVar1 * 0x38 + 0x30) = uVar3;
        *(undefined8 *)(local_68 + uVar1 * 0x38 + 0x50) = uStack_a8;
        *(undefined8 *)(local_68 + uVar1 * 0x38 + 0x48) = local_b0;
        *(undefined8 *)(local_68 + uVar1 * 0x38 + 0x40) = uStack_b8;
        *(undefined8 *)(local_68 + uVar1 * 0x38 + 0x38) = local_c0;
        lVar8 = lVar8 + -1;
        param_2 = param_2 + 7;
      } while (lVar8 != 0);
      _swift_bridgeObjectRelease(local_e0);
      param_4 = uStack_c8;
      param_3 = local_d0;
      param_1 = local_d8;
    }
    _swift_bridgeObjectRetain(puVar9);
    FUN_100008184(param_3,param_4);
    _swift_bridgeObjectRelease(puVar9);
    FUN_100006cdc(param_3,param_4);
  }
  else {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_100 = (undefined *)param_1;
    local_f8 = param_2;
    local_f0 = param_3;
    local_e8 = param_4;
    FUN_1003fb45c(FUN_100128e40,auStack_110,0xd0000000000000a9,0x800000010088e440,0xd000000000000020
                  ,0x800000010088e5f0,0x74,0);
    _swift_bridgeObjectRetain(param_2);
    FUN_100008184(param_3,param_4);
  }
  return param_1;
}

