// rea decompile_all
// name: FUN_10064e2c8
// address: 0x10064e2c8
// body: available
// range: 0x10064e2c8-0x10064e387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064e2c8(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  byte bVar5;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  long lStack_58;
  long local_50;
  long local_48;
  
  bVar5 = *(byte *)(param_2 + 4) ^ *(byte *)(param_3 + 4);
  lStack_58 = param_2[1];
  local_60 = *param_2;
  local_48 = param_2[3];
  local_50 = param_2[2];
  uStack_78 = param_3[1];
  local_80 = *param_3;
  local_68 = param_3[3];
  uStack_70 = param_3[2];
  FUN_100643424(param_2,auStack_a8);
  FUN_100643424(param_3,auStack_a8);
  FUN_10064dab4(&local_60,&local_80);
  lVar4 = local_48;
  lVar2 = lStack_58;
  lVar1 = local_60;
  cVar3 = (char)local_50;
  _swift_bridgeObjectRelease(local_68);
  if (cVar3 == '\0') {
    if (lVar1 != 0 || lVar2 != 0) goto LAB_10064e35c;
  }
  else if ((cVar3 == '\x01') || (*(long *)(lVar4 + 0x10) != 0)) goto LAB_10064e35c;
  bVar5 = 0;
LAB_10064e35c:
  *param_1 = lVar1;
  param_1[1] = lVar2;
  *(char *)(param_1 + 2) = cVar3;
  param_1[3] = lVar4;
  *(byte *)(param_1 + 4) = bVar5 & 1;
  return;
}

