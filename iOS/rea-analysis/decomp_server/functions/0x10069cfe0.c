// rea decompile_all
// name: FUN_10069cfe0
// address: 0x10069cfe0
// body: available
// range: 0x10069cfe0-0x10069d0b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069cfe0(long *param_1)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  undefined8 ***local_38;
  long lStack_30;
  undefined7 local_28;
  char cStack_21;
  
  FUN_10069cde4(&local_38);
  FUN_10069cfb0();
  ppppuVar2 = &local_38;
  FUN_10069c180(ppppuVar2,&DAT_100b2c4f8);
  if ((int)ppppuVar2 != 0) {
    FUN_10069d0b4();
    ppppuVar2 = &local_38;
    FUN_10069c180(ppppuVar2,&DAT_100b2c510);
    if ((int)ppppuVar2 != 0) {
      ppppuVar2 = &local_38;
      std::string::rfind((char)ppppuVar2,0x2e);
      if (ppppuVar2 != (undefined8 ****)0xffffffffffffffff) {
        ppppuVar1 = (undefined8 ****)local_38;
        if (-1 < cStack_21) {
          ppppuVar1 = &local_38;
        }
        FUN_10069de30(param_1,ppppuVar1,(long)ppppuVar1 + (long)ppppuVar2);
        goto LAB_10069d094;
      }
    }
  }
  if (cStack_21 < '\0') {
    FUN_100384eb8(param_1,local_38,lStack_30);
  }
  else {
    param_1[1] = lStack_30;
    *param_1 = (long)local_38;
    param_1[2] = CONCAT17(cStack_21,local_28);
  }
LAB_10069d094:
  if (cStack_21 < '\0') {
    operator_delete(local_38);
  }
  return;
}

