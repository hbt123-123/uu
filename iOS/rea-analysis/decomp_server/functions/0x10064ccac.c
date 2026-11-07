// rea decompile_all
// name: FUN_10064ccac
// address: 0x10064ccac
// body: available
// range: 0x10064ccac-0x10064cd9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064ccac(long *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  long *unaff_x20;
  undefined1 auStack_98 [40];
  long local_70;
  long lStack_68;
  long local_60;
  long local_58;
  long local_50;
  long lStack_48;
  long local_40;
  long local_38;
  
  lStack_48 = unaff_x20[1];
  local_50 = *unaff_x20;
  local_38 = unaff_x20[3];
  local_40 = unaff_x20[2];
  lStack_68 = param_2[1];
  local_70 = *param_2;
  local_58 = param_2[3];
  local_60 = param_2[2];
  FUN_100643424();
  FUN_100643424(param_2,auStack_98);
  FUN_10064dab4(&local_50,&local_70);
  bVar1 = *(byte *)(unaff_x20 + 4);
  bVar2 = bVar1 ^ *(byte *)(param_2 + 4);
  if ((char)local_40 == '\0') {
    if (local_50 == 0 && lStack_48 == 0) goto LAB_10064cd34;
  }
  else if (((char)local_40 != '\x01') && (*(long *)(local_38 + 0x10) == 0)) {
LAB_10064cd34:
    bVar2 = 0;
  }
  if ((char)local_60 == '\0') {
    if (local_70 != 0 || lStack_68 != 0) goto LAB_10064cd68;
  }
  else if (((char)local_60 == '\x01') || (*(long *)(local_58 + 0x10) != 0)) goto LAB_10064cd68;
  bVar1 = 0;
LAB_10064cd68:
  *param_1 = local_50;
  param_1[1] = lStack_48;
  *(char *)(param_1 + 2) = (char)local_40;
  param_1[3] = local_38;
  *(byte *)(param_1 + 4) = bVar2 & 1;
  param_1[5] = local_70;
  param_1[6] = lStack_68;
  *(char *)(param_1 + 7) = (char)local_60;
  param_1[8] = local_58;
  *(byte *)(param_1 + 9) = bVar1;
  return;
}

