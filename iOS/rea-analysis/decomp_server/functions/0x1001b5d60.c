// rea decompile_all
// name: FUN_1001b5d60
// address: 0x1001b5d60
// body: available
// range: 0x1001b5d60-0x1001b5e93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b5d60(void)

{
  pid_t pVar1;
  uid_t uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ID self;
  long unaff_x20;
  undefined1 local_31;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 extraout_var;
  
  local_31 = 0;
  puVar4 = PTR___sSbN_1009958c8;
  FUN_10039f5b8(&local_30,&local_31);
  *(undefined8 *)(unaff_x20 + 0x10) = local_30;
  *(undefined1 *)(unaff_x20 + 0x18) = local_28;
  pVar1 = _getpid();
  *(pid_t *)(unaff_x20 + 0x1c) = pVar1;
  uVar2 = _getuid();
  *(uid_t *)(unaff_x20 + 0x20) = uVar2;
  pVar1 = _getpid();
  uVar3 = CONCAT44(extraout_var,pVar1);
  FUN_10040ce00();
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  *(undefined **)(unaff_x20 + 0x30) = puVar4;
  *(undefined2 *)(unaff_x20 + 0x38) = 1;
  FUN_1001b92ac();
  *(byte *)(unaff_x20 + 0x3a) = (byte)uVar3 & 1;
  puVar4 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  self = _objc_msgSend((ID)puVar4,"init");
  *(ID *)(unaff_x20 + 0x40) = self;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  _objc_msgSend(self,"lock");
  if (*(long *)(unaff_x20 + 0x30) == 0) {
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_1001b941c);
  }
  FUN_1001b5f48(0x90e58ba8e79bbfe8,0xac000000a88ae5af);
  FUN_1001b629c();
  _objc_msgSend(*(ID *)(unaff_x20 + 0x40),"unlock");
  return;
}

