// rea decompile_all
// name: FUN_1006244c8
// address: 0x1006244c8
// body: available
// range: 0x1006244c8-0x10062462f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006244c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  puVar2 = &DAT_1009e0bb0;
  _swift_allocObject(&DAT_1009e0bb0,0x50,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  *(undefined8 *)(puVar2 + 0x18) = param_8;
  *(undefined8 *)(puVar2 + 0x20) = param_9;
  *(long *)(puVar2 + 0x28) = param_2 + 0x10;
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  *(undefined8 *)(puVar2 + 0x40) = param_5;
  *(long *)(puVar2 + 0x48) = param_6 + 0x10;
  puVar3 = &DAT_1009e0bd8;
  _swift_allocObject(&DAT_1009e0bd8,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_100627414;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_70 = thunk_FUN_1000f4ed4;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000fcdcc;
  puStack_78 = &DAT_1009e0bf0;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  puVar4 = local_68;
  _swift_retain(param_3);
  _swift_retain(param_5);
  _swift_retain(puVar3);
  _swift_release(puVar4);
  _dispatch_sync(param_1,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x9a,0x16a,0x1a,1);
  _swift_release(puVar2);
  _swift_release(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100624630);
  (*pcVar1)();
}

