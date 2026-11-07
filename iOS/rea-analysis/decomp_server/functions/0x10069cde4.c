// rea decompile_all
// name: FUN_10069cde4
// address: 0x10069cde4
// body: available
// range: 0x10069cde4-0x10069cedb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10069ce78 to 0x1006928dc FUN_1006928dc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10069ced8 to 0x100384eb8 FUN_100384eb8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069cde4(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  
  cVar1 = *(char *)((long)param_2 + 0x17);
  uVar5 = (ulong)cVar1;
  if ((long)uVar5 < 0) {
    uVar5 = param_2[1];
  }
  puVar3 = param_2;
  FUN_10069ccc0(param_2,uVar5);
  if (uVar5 != 0 && puVar3 != (ulong *)0x0) {
    puVar4 = param_2;
    if (cVar1 < '\0') {
      puVar4 = (ulong *)*param_2;
    }
    if ((*(char *)((long)puVar4 + (long)puVar3) == '/') &&
       (puVar4 = param_2, FUN_10069cedc(param_2,puVar3), ((ulong)puVar4 & 1) == 0)) {
      FUN_10069cfb0();
      uVar2 = DAT_100b2c4f8;
      if (-1 < DAT_100b2c508._7_1_) {
        param_1[1] = DAT_100b2c500;
        *param_1 = uVar2;
        param_1[2] = CONCAT17(DAT_100b2c508._7_1_,(undefined7)DAT_100b2c508);
        return;
      }
      FUN_100384eb8(param_1,DAT_100b2c4f8,DAT_100b2c500);
      return;
    }
  }
  if (cVar1 < '\0') {
    param_2 = (ulong *)*param_2;
  }
  FUN_1006928dc(param_1,(long)param_2 + (long)puVar3);
  return;
}

