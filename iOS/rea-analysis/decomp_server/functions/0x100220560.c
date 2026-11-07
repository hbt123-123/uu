// rea decompile_all
// name: FUN_100220560
// address: 0x100220560
// body: available
// range: 0x100220560-0x100220613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100220560(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  iVar3 = (int)&local_70;
  FUN_1002233f8(0);
  _swift_beginAccess(&DAT_100a7e308,auStack_68,0,0);
  uVar2 = DAT_100a7e310;
  uVar1 = DAT_100a7e308;
  _swift_bridgeObjectRetain(DAT_100a7e310);
  FUN_100223100(auStack_50,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  puVar4 = &DAT_100a7e318;
  FUN_100004bb4(&DAT_100a7e318,&DAT_100813488);
  _swift_dynamicCast(&local_70,auStack_50,PTR___sypN_100995e88 + 8,puVar4,6);
  if (iVar3 == 0) {
    local_70 = 0;
  }
  return local_70;
}

