// rea decompile_all
// name: FUN_100341d7c
// address: 0x100341d7c
// body: available
// range: 0x100341d7c-0x100341f0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100341d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  long local_68;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  if (*(long *)(lVar4 + 0x10) == 0) {
    (*param_4)(1,2);
  }
  else {
    FUN_1000b142c(lVar4 + 0x20,auStack_90);
    lVar3 = *(long *)(lVar4 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100341f10);
      (*pcVar5)();
    }
    lVar1 = lVar4;
    _swift_bridgeObjectRetain();
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)lVar1 == 0) || (*(ulong *)(lVar4 + 0x18) >> 1 < lVar3 - 1U)) {
      local_68 = lVar4;
      FUN_10029655c();
      lVar4 = lVar1;
    }
    local_68 = lVar4;
    FUN_100342528(0,1,0,&DAT_100a83310,&DAT_1008186b0);
    FUN_10003f030(auStack_90,local_78);
    puVar2 = &DAT_1009b35b0;
    _swift_allocObject(&DAT_1009b35b0,0x48,7);
    *(code **)(puVar2 + 0x10) = param_4;
    *(undefined8 *)(puVar2 + 0x18) = param_5;
    *(long *)(puVar2 + 0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + 0x28) = param_1;
    *(undefined8 *)(puVar2 + 0x30) = param_2;
    *(undefined8 *)(puVar2 + 0x38) = param_3;
    *(long *)(puVar2 + 0x40) = lVar4;
    pcVar5 = *(code **)(lStack_70 + 8);
    _swift_retain(param_5);
    _swift_retain();
    _swift_retain(param_1);
    _swift_retain(param_2);
    _swift_errorRetain(param_3);
    (*pcVar5)(param_1,param_2,param_3,thunk_FUN_100342d10,puVar2,local_78,lStack_70);
    _swift_release(puVar2);
    FUN_10003f094(auStack_90);
  }
  return;
}

