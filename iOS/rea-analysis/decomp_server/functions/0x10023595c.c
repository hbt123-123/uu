// rea decompile_all
// name: _TtC6FCount6FCount::pushUserProfileIntIncreaseWithKey:increase:
// address: 0x10023595c
// body: available
// range: 0x10023595c-0x100235a23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

void _TtC6FCount6FCount::pushUserProfileIntIncreaseWithKey_increase_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = &DAT_100a7f178;
  FUN_100004bb4(&DAT_100a7f178,&DAT_100814010);
  _swift_initStackObject();
  *(ID *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined **)(puVar1 + 0x48) = PTR___sSiN_100995968;
  *(SEL *)(puVar1 + 0x28) = param_2;
  *(long_long *)(puVar1 + 0x30) = param_4;
  puVar2 = puVar1;
  FUN_100234418();
  _swift_setDeallocating(puVar1);
  FUN_100040bb4(puVar1 + 0x20,&DAT_100a7f180,&DAT_100813c98);
  FUN_100237ce0(3,puVar2,0);
  _swift_bridgeObjectRelease(puVar2);
  return;
}

