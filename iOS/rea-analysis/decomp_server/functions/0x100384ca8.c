// rea decompile_all
// name: FUN_100384ca8
// address: 0x100384ca8
// body: available
// range: 0x100384ca8-0x100384d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100384ca8(void)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 ****ppppuVar3;
  undefined8 ***local_58 [2];
  char local_41;
  undefined8 **local_40;
  undefined8 **ppuStack_38;
  undefined8 **local_30;
  undefined1 uStack_21;
  
  sVar1 = DAT_100b366e8;
  if (-1 < (char)DAT_100b366f0._7_1_) {
    sVar1 = (ulong)DAT_100b366f0._7_1_;
  }
  FUN_1003856e0(local_58,sVar1 + 1,&uStack_21);
  ppppuVar3 = (undefined8 ****)local_58[0];
  if (-1 < local_41) {
    ppppuVar3 = local_58;
  }
  if (sVar1 != 0) {
    puVar2 = DAT_100b366e0;
    if (-1 < (char)DAT_100b366f0._7_1_) {
      puVar2 = &DAT_100b366e0;
    }
    _memmove(ppppuVar3,puVar2,sVar1);
  }
  *(undefined2 *)((long)ppppuVar3 + sVar1) = 0x2f;
  ppppuVar3 = local_58;
  std::string::append((char *)ppppuVar3);
  ppuStack_38 = ppppuVar3[1];
  local_40 = *ppppuVar3;
  local_30 = ppppuVar3[2];
  ppppuVar3[1] = (undefined8 ***)0x0;
  ppppuVar3[2] = (undefined8 ***)0x0;
  *ppppuVar3 = (undefined8 ***)0x0;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  FUN_10039046c(&local_40);
  if ((long)local_30 < 0) {
    operator_delete(local_40);
  }
  return;
}

