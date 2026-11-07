// rea decompile_all
// name: FUN_100220478
// address: 0x100220478
// body: available
// range: 0x100220478-0x10022055f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100220478(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  puVar3 = &local_70;
  FUN_1002233f8(0);
  _swift_beginAccess(&DAT_100a7e308,auStack_68,0,0);
  uVar1 = DAT_100a7e310;
  uVar4 = DAT_100a7e308;
  _swift_bridgeObjectRetain(DAT_100a7e310);
  FUN_100223100(auStack_50,uVar4,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  puVar2 = &DAT_100a7e318;
  FUN_100004bb4(&DAT_100a7e318,&DAT_100813488);
  _swift_dynamicCast(&local_70,auStack_50,PTR___sypN_100995e88 + 8,puVar2,6);
  if (((ulong)puVar3 & 1) == 0) {
    uVar5 = 1;
  }
  else {
    FUN_1002223d0();
    uVar4 = local_70;
    FUN_100221474(local_70,puVar3);
    _swift_bridgeObjectRelease(local_70);
    _swift_bridgeObjectRelease(puVar3);
    uVar5 = (uint)uVar4 ^ 1;
  }
  return uVar5 & 1;
}

