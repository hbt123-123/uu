// rea decompile_all
// name: FUN_10064ebd8
// address: 0x10064ebd8
// body: available
// range: 0x10064ebd8-0x10064ec4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064ebd8(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x20;
  byte bVar6;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  bVar6 = *(byte *)(unaff_x20 + 4) & (byte)param_2;
  lVar3 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar5 = (ulong)*(byte *)(unaff_x20 + 2);
  FUN_10064e58c();
  if ((uVar4 & 0xff) == 0) {
    if (CONCAT44(uVar2,uVar1) != 0 || lVar3 != 0) goto LAB_10064ec2c;
  }
  else if ((((uint)uVar4 & 0xff) == 1) || (*(long *)(uVar5 + 0x10) != 0)) goto LAB_10064ec2c;
  bVar6 = 0;
LAB_10064ec2c:
  *param_1 = CONCAT44(uVar2,uVar1);
  param_1[1] = lVar3;
  *(char *)(param_1 + 2) = (char)uVar4;
  param_1[3] = uVar5;
  *(byte *)(param_1 + 4) = bVar6 & 1;
  return;
}

