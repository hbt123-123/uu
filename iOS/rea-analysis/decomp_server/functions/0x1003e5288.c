// rea decompile_all
// name: FUN_1003e5288
// address: 0x1003e5288
// body: available
// range: 0x1003e5288-0x1003e53bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e5288(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &DAT_1009bac18;
  _swift_allocObject(&DAT_1009bac18,0x28,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar3 = &DAT_1009bac40;
  _swift_allocObject(&DAT_1009bac40,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_1003e65bc;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_50 = FUN_1000f4ed4;
  local_70 = PTR___NSConcreteStackBlock_100995490;
  local_68 = 0x42000000;
  local_60 = FUN_1000fcdcc;
  puStack_58 = &DAT_1009bac58;
  local_48 = puVar3;
  aBlock = __Block_copy(&local_70);
  puVar4 = local_48;
  _swift_retain();
  _swift_retain(puVar3);
  _swift_release(puVar4);
  _dispatch_sync(uVar5,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x8f,0x42,0x16,1);
  _swift_release(puVar2);
  _swift_release(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e53bc);
  (*pcVar1)();
}

