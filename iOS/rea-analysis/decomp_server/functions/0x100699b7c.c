// rea decompile_all
// name: FUN_100699b7c
// address: 0x100699b7c
// body: available
// range: 0x100699b7c-0x100699c57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100699b7c(undefined8 *param_1,string *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  string *psVar3;
  void *local_38 [2];
  char local_21;
  
  psVar3 = param_2;
  if ((DAT_100b2c4b8 & 1) == 0) {
    FUN_10069be44();
  }
  uVar1 = DAT_100b2c4c8;
  if (-1 < (char)DAT_100b2c4d0._7_1_) {
    uVar1 = (ulong)DAT_100b2c4d0._7_1_;
  }
  if (uVar1 == 0) {
    FUN_100699694(local_38,param_2);
    std::string::operator=(param_2,(string *)&DAT_100b2c4c0);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  else if (param_2 != (string *)0x0) {
    *(undefined4 *)param_2 = 0;
    FUN_10069f164();
    *(string **)(param_2 + 8) = psVar3;
  }
  uVar2 = DAT_100b2c4c0;
  if ((char)DAT_100b2c4d0._7_1_ < '\0') {
    FUN_100384eb8(param_1,DAT_100b2c4c0,DAT_100b2c4c8);
  }
  else {
    param_1[1] = DAT_100b2c4c8;
    *param_1 = uVar2;
    param_1[2] = CONCAT17(DAT_100b2c4d0._7_1_,(undefined7)DAT_100b2c4d0);
  }
  return;
}

