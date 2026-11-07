// rea decompile_all
// name: FUN_10069bcec
// address: 0x10069bcec
// body: available
// range: 0x10069bcec-0x10069be43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_10069bcec(char *param_1,char *param_2,char *param_3)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  ulong uVar3;
  uint uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 ***local_58 [2];
  char local_41;
  
  uVar6 = (ulong)param_1[0x17];
  uVar1 = (long)param_3 - (long)param_2;
  if ((long)uVar6 < 0) {
    if (uVar1 == 0) {
      return param_1;
    }
    uVar7 = *(ulong *)(param_1 + 8);
    uVar3 = (*(ulong *)(param_1 + 0x10) & 0x7fffffffffffffff) - 1;
    pcVar5 = *(char **)param_1;
    uVar6 = *(ulong *)(param_1 + 0x10) >> 0x38;
  }
  else {
    if (uVar1 == 0) {
      return param_1;
    }
    uVar3 = 0x16;
    pcVar5 = param_1;
    uVar7 = uVar6;
  }
  uVar4 = (uint)uVar6;
  if ((param_2 < pcVar5) || (pcVar5 + uVar7 + 1 <= param_2)) {
    if (uVar3 - uVar7 < uVar1) {
      std::string::__grow_by((ulong)param_1,uVar3,(uVar7 - uVar3) + uVar1,uVar7,uVar7,0);
      *(ulong *)(param_1 + 8) = uVar7;
      uVar4 = (uint)(byte)param_1[0x17];
    }
    pcVar5 = param_1;
    if ((uVar4 >> 7 & 1) != 0) {
      pcVar5 = *(char **)param_1;
    }
    if (param_3 != param_2) {
      _memmove(pcVar5 + uVar7,param_2,uVar1);
    }
    (pcVar5 + uVar7)[uVar1] = '\0';
    if (param_1[0x17] < '\0') {
      *(ulong *)(param_1 + 8) = uVar1 + uVar7;
    }
    else {
      param_1[0x17] = (byte)(uVar1 + uVar7) & 0x7f;
    }
  }
  else {
    FUN_10069bc50(local_58,param_2,param_3,uVar1);
    ppppuVar2 = (undefined8 ****)local_58[0];
    if (-1 < local_41) {
      ppppuVar2 = local_58;
    }
    std::string::append(param_1,(ulong)ppppuVar2);
    if (local_41 < '\0') {
      operator_delete(local_58[0]);
    }
  }
  return param_1;
}

