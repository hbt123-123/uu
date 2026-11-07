// rea decompile_all
// name: FUN_100659e6c
// address: 0x100659e6c
// body: available
// range: 0x100659e6c-0x100659f37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100659e6c(long *param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined *puVar4;
  char cVar5;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  puVar4 = (undefined *)(ulong)*(byte *)(unaff_x20 + 2);
  FUN_10065933c();
  cVar5 = (char)unaff_x20[4];
  uVar2 = (undefined1)uVar3;
  if (cVar5 != '\x01') {
    if ((uVar3 & 0xff) == 0) {
LAB_100659f04:
      uVar2 = 0;
      if (param_2 != 0 || lVar1 != 0) goto LAB_100659f1c;
      lVar1 = 0;
      param_2 = 0;
      uVar2 = 0;
    }
    else if (((uint)uVar3 & 0xff) != 1) {
      uVar2 = 2;
    }
    cVar5 = '\0';
    goto LAB_100659f1c;
  }
  if ((uVar3 & 0xff) == 0) {
    if (param_2 != 0 || lVar1 != 0) goto LAB_100659f04;
LAB_100659ee0:
    _swift_bridgeObjectRelease(puVar4);
    uVar2 = 0;
    lVar1 = 0;
    param_2 = 1;
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else if (((uint)uVar3 & 0xff) != 1) {
    if (*(long *)(puVar4 + 0x10) != 0) {
      cVar5 = '\x01';
      uVar2 = 2;
      goto LAB_100659f1c;
    }
    goto LAB_100659ee0;
  }
  cVar5 = '\x01';
LAB_100659f1c:
  *param_1 = param_2;
  param_1[1] = lVar1;
  *(undefined1 *)(param_1 + 2) = uVar2;
  param_1[3] = (long)puVar4;
  *(char *)(param_1 + 4) = cVar5;
  return;
}

