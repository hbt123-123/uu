// rea decompile_all
// name: FUN_1003e8f7c
// address: 0x1003e8f7c
// body: available
// range: 0x1003e8f7c-0x1003e90cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e8f7c(byte param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined *puVar5;
  undefined8 unaff_x20;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  if (DAT_100a89350 != -1) {
    _swift_once(&DAT_100a89350,FUN_1003e8da0);
  }
  uVar1 = DAT_100a8d0f0;
  puVar3 = &DAT_1009bb208;
  _swift_allocObject(&DAT_1009bb208,0x19,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  puVar3[0x18] = param_1 & 1;
  puVar4 = &DAT_1009bb230;
  _swift_allocObject(&DAT_1009bb230,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1003e9178;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  local_50 = FUN_1000f4ed4;
  local_70 = PTR___NSConcreteStackBlock_100995490;
  local_68 = 0x42000000;
  local_60 = FUN_1000fcdcc;
  puStack_58 = &DAT_1009bb248;
  local_48 = puVar4;
  aBlock = __Block_copy(&local_70);
  puVar5 = local_48;
  _swift_retain(puVar4);
  _swift_release(puVar5);
  _dispatch_sync(uVar1,aBlock);
  __Block_release(aBlock);
  puVar5 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x8c,0x10,0x24,1);
  _swift_release(puVar3);
  _swift_release(puVar4);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e90d0);
  (*pcVar2)();
}

