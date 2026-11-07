// rea decompile_all
// name: FUN_100699a78
// address: 0x100699a78
// body: available
// range: 0x100699a78-0x100699b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100699a78(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  stat sStack_b0;
  
  pcVar1 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    pcVar1 = param_1;
  }
  iVar3 = _stat(pcVar1,&sStack_b0);
  uVar2 = 0;
  if (iVar3 != 0) {
    puVar4 = (uint *)___error();
    uVar2 = *puVar4;
  }
  uVar5 = (ulong)uVar2;
  FUN_100699888(uVar5,param_1,param_2,"mars_boost::filesystem::file_size");
  if ((uVar5 & 1) == 0) {
    uVar5 = (ulong)((sStack_b0.st_mode & 0xf000) != 0x8000);
    FUN_100699888(uVar5,param_1,param_2,"mars_boost::filesystem::file_size");
    if ((uVar5 & 1) == 0) {
      return sStack_b0.st_size;
    }
  }
  return 0xffffffffffffffff;
}

