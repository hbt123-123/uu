// rea decompile_all
// name: FUN_100686430
// address: 0x100686430
// body: available
// range: 0x100686430-0x1006865b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001006864e8) */

undefined1  [16] FUN_100686430(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = &DAT_100ab9eb0;
  FUN_100004bb4(&DAT_100ab9eb0,&DAT_10084d530);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  puVar1[0x20] = 0;
  uVar2 = 0;
  FUN_10068f660();
  *(undefined8 *)(puVar1 + 0x40) = uVar2;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  puVar3 = puVar1;
  FUN_10068e008(puVar1);
  _swift_setDeallocating(puVar1);
  FUN_100040bb4(puVar1 + 0x20,&DAT_100ab9eb8,&DAT_10084d538);
  puVar1 = puVar3;
  FUN_1006865b8(param_1,puVar3,10);
  _swift_bridgeObjectRelease(puVar3);
  auVar4._8_8_ = puVar1;
  auVar4._0_8_ = param_1;
  return auVar4;
}

