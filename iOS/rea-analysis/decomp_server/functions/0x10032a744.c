// rea decompile_all
// name: FUN_10032a744
// address: 0x10032a744
// body: available
// range: 0x10032a744-0x10032a81f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10032a744(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long lStack_68;
  
  if (param_2 != 0) {
    uVar1 = *param_7;
    uVar2 = param_7[1];
    puVar4 = &DAT_1009b1dc8;
    _swift_allocObject(&DAT_1009b1dc8,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = param_8;
    *(undefined8 *)(puVar4 + 0x18) = uVar1;
    *(undefined8 *)(puVar4 + 0x20) = uVar2;
    _swift_retain(uVar2);
    if (param_6 == 0 && param_5 == 0) {
      puStack_90 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puStack_90 = &local_80;
      local_70 = param_5;
      lStack_68 = param_6;
    }
    local_98 = 7;
    local_88 = param_2;
    _swift_task_create(param_4,&local_98,param_8,&DAT_10081a6c0,puVar4);
    *param_1 = param_4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10032a820);
  (*pcVar3)();
}

