// rea decompile_all
// name: FUN_100615648
// address: 0x100615648
// body: available
// range: 0x100615648-0x100615717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001006156d4) */

void FUN_100615648(code *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar1 = 0xff;
  FUN_100616300(0xff,uVar4);
  lVar2 = 0;
  FUN_100608524(0,uVar1);
  FUN_1006082d4();
  unaff_x20[2] = lVar2;
  switchD_1005ea49c::caseD_cc(0,uVar4);
  lVar3 = lVar2;
  FUN_1002c2284(lVar2);
  _swift_retain(lVar2);
  (*param_1)(lVar3);
  _swift_release(lVar3);
  return;
}

