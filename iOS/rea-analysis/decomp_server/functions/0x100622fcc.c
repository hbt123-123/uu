// rea decompile_all
// name: FUN_100622fcc
// address: 0x100622fcc
// body: available
// range: 0x100622fcc-0x10062312f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100622fcc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  
  puVar2 = &DAT_1009e0d40;
  _swift_allocObject(&DAT_1009e0d40,0x48,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  *(undefined8 *)(puVar2 + 0x18) = param_7;
  *(undefined8 *)(puVar2 + 0x20) = param_8;
  *(long *)(puVar2 + 0x28) = param_2 + 0x10;
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  *(long *)(puVar2 + 0x40) = param_5 + 0x10;
  puVar3 = &DAT_1009e0d68;
  _swift_allocObject(&DAT_1009e0d68,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_100627688;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_70 = thunk_FUN_1000f4ed4;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000fcdcc;
  puStack_78 = &DAT_1009e0d80;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  puVar4 = local_68;
  _swift_retain(param_3);
  _swift_retain(param_4);
  _swift_retain(puVar3);
  _swift_release(puVar4);
  _dispatch_sync(param_1,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x9a,0xcf,0x1a,1);
  _swift_release(puVar2);
  _swift_release(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100623130);
  (*pcVar1)();
}

