// rea decompile_all
// name: FUN_10018be14
// address: 0x10018be14
// body: available
// range: 0x10018be14-0x10018c03f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10018be14(code *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x12;
  long unaff_x21;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  code *local_a0;
  undefined8 local_98;
  long lStack_90;
  ulong local_88;
  long local_80;
  undefined *local_78;
  ulong local_70;
  long local_68;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar2 + -8);
  local_68 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  lVar2 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_70 = lVar2 - extraout_x12;
  local_88 = *(ulong *)(param_3 + 0x10);
  if (local_88 == 0) {
    local_78 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar7 = 0;
    local_78 = PTR___swiftEmptyArrayStorage_100995ea0;
    local_a0 = param_1;
    local_98 = param_2;
    lStack_90 = param_3;
    do {
      uVar3 = local_70;
      if (*(ulong *)(param_3 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10018c040);
        (*pcVar8)();
      }
      uVar5 = (ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
              ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff);
      lVar2 = *(long *)(lVar6 + 0x48);
      (**(code **)(lVar6 + 0x10))(local_70,param_3 + uVar5 + lVar2 * uVar7,local_68);
      (*param_1)();
      if (unaff_x21 != 0) {
        (**(code **)(lVar6 + 8))(local_70,local_68);
        puVar1 = local_78;
        _swift_release(local_78);
        _swift_bridgeObjectRelease(param_3);
        return puVar1;
      }
      if ((uVar3 & 1) == 0) {
        (**(code **)(lVar6 + 8))(local_70,local_68);
      }
      else {
        pcVar8 = *(code **)(lVar6 + 0x20);
        (*pcVar8)(local_80,local_70,local_68);
        puVar1 = local_78;
        puVar4 = local_78;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar4 & 1) == 0) {
          FUN_10006fcb0(0,*(long *)(puVar1 + 0x10) + 1,1);
        }
        uVar3 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
          FUN_10006fcb0(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
        }
        *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
        local_78 = puVar1;
        (*pcVar8)(puVar1 + uVar3 * lVar2 + uVar5,local_80,local_68);
        param_3 = lStack_90;
        param_1 = local_a0;
      }
      uVar7 = uVar7 + 1;
    } while (local_88 != uVar7);
  }
  _swift_bridgeObjectRelease(param_3);
  return local_78;
}

