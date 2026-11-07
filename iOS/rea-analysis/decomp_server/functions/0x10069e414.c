// rea decompile_all
// name: FUN_10069e414
// address: 0x10069e414
// body: available
// range: 0x10069e414-0x10069e4cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010069e490) */
/* WARNING: Removing unreachable block (ram,0x00010069e4a0) */

void FUN_10069e414(string *param_1,wstring param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0;
  std::string::operator=(param_1,param_1 + 0x28);
  std::wstring::operator=((wstring *)param_1,(wstring *)(param_1 + 0x40));
  *(wstring *)(param_1 + 0x58) = (wstring)0x0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(wstring *)(param_1 + 0x74) = param_2;
  return;
}

