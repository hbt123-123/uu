// rea decompile_all
// name: FUN_10064e388
// address: 0x10064e388
// body: available
// range: 0x10064e388-0x10064e477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064e388(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  char local_60;
  
  uVar4 = (undefined1)param_2[4];
  lVar6 = param_2[1];
  lVar5 = *param_2;
  lVar1 = param_2[2];
  lVar2 = param_2[3];
  uVar3 = param_3;
  FUN_10065fef8(param_3,param_4,param_5,param_6);
  _swift_bridgeObjectRetain(lVar2);
  FUN_10064fbe0(param_3,param_4,param_5,param_6,uVar3);
  FUN_10064d170();
  _swift_bridgeObjectRelease(param_6);
  local_60 = (char)lVar1;
  if (local_60 == '\0') {
    if (lVar5 != 0 || lVar6 != 0) goto LAB_10064e44c;
  }
  else if ((local_60 == '\x01') || (*(long *)(lVar2 + 0x10) != 0)) goto LAB_10064e44c;
  uVar4 = 0;
LAB_10064e44c:
  *param_1 = lVar5;
  param_1[1] = lVar6;
  *(char *)(param_1 + 2) = local_60;
  param_1[3] = lVar2;
  *(undefined1 *)(param_1 + 4) = uVar4;
  return;
}

