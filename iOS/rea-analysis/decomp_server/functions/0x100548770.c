// rea decompile_all
// name: FUN_100548770
// address: 0x100548770
// body: available
// range: 0x100548770-0x100548907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100548884) */

void FUN_100548770(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  code *pcVar4;
  undefined8 local_80 [2];
  undefined8 local_70;
  long local_68;
  undefined *local_60;
  long local_58;
  
  lVar3 = *(long *)(param_3 + 0x10);
  FUN_1005468cc(param_2,lVar3,*(undefined8 *)(param_3 + 0x18));
  if (lVar3 != 0) {
    if (unaff_x20[1] != 0) {
      local_70 = *unaff_x20;
      local_68 = unaff_x20[1];
      _swift_bridgeObjectRetain();
      __sSS6appendyySSF(0x2e,0xe100000000000000);
      __sSS6appendyySSF(param_2,lVar3);
      _swift_bridgeObjectRelease(lVar3);
      lVar3 = local_68;
      param_2 = local_70;
    }
    local_58 = param_4;
    FUN_1000efc08(&local_70);
    (**(code **)(*(long *)(param_4 + -8) + 0x10))();
    _swift_bridgeObjectRetain(lVar3);
    FUN_10050f840(&local_70,param_2,lVar3);
    puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_1005b9ce0();
    pcVar4 = *(code **)(param_5 + 0x48);
    uVar2 = 0;
    local_70 = param_2;
    local_68 = lVar3;
    local_60 = puVar1;
    FUN_100548658(0,param_4,param_5);
    (*pcVar4)(&local_70,uVar2,&PTR_PTR_1009d1400,param_4,param_5);
    puVar1 = local_60;
    _swift_bridgeObjectRetain(local_60);
    uVar2 = unaff_x20[2];
    _swift_isUniquelyReferenced_nonNull_native(uVar2);
    local_80[0] = unaff_x20[2];
    FUN_10054930c(puVar1,FUN_10023fa68,0,uVar2,local_80);
    _swift_bridgeObjectRelease(puVar1);
    lVar3 = local_68;
    _swift_bridgeObjectRelease(puVar1);
    _swift_bridgeObjectRelease(lVar3);
    unaff_x20[2] = local_80[0];
  }
  return;
}

