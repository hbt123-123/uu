// rea decompile_all
// name: FUN_100341f10
// address: 0x100341f10
// body: available
// range: 0x100341f10-0x1003420ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100342078 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100341f10(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  if (1 < ((uint)param_2 & 0xff) && param_1 != 0) {
    lVar4 = *(long *)(param_9 + 0x10);
    if (lVar4 != 0) {
      lVar2 = param_9;
      _swift_bridgeObjectRetain();
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)lVar2 == 0) || (lVar5 = param_9, *(ulong *)(param_9 + 0x18) >> 1 < lVar4 - 1U)) {
        FUN_10029655c();
        lVar5 = lVar2;
      }
      FUN_100342528(0,1,0,&DAT_100a83310,&DAT_1008186b0);
      uVar1 = *(undefined8 *)(param_9 + 0x38);
      lVar4 = *(long *)(param_9 + 0x40);
      FUN_10003f030(param_9 + 0x20,uVar1);
      puVar3 = &DAT_1009b3728;
      _swift_allocObject(&DAT_1009b3728,0x48,7);
      *(code **)(puVar3 + 0x10) = param_3;
      *(undefined8 *)(puVar3 + 0x18) = param_4;
      *(undefined8 *)(puVar3 + 0x20) = param_5;
      *(undefined8 *)(puVar3 + 0x28) = param_6;
      *(undefined8 *)(puVar3 + 0x30) = param_7;
      *(undefined8 *)(puVar3 + 0x38) = param_8;
      *(long *)(puVar3 + 0x40) = lVar5;
      pcVar6 = *(code **)(lVar4 + 8);
      _swift_retain(param_4);
      _swift_retain(param_5);
      _swift_retain(param_6);
      _swift_retain(param_7);
      _swift_errorRetain(param_8);
      (*pcVar6)(param_6,param_7,param_8,thunk_FUN_100342d10,puVar3,uVar1,lVar4);
      _swift_release(puVar3);
      return;
    }
    param_1 = 1;
    param_2 = 2;
  }
  (*param_3)(param_1,param_2);
  return;
}

