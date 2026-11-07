// rea decompile_all
// name: FUN_10011cea4
// address: 0x10011cea4
// body: available
// range: 0x10011cea4-0x10011cfaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10011cea4(char *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [16];
  char *local_50;
  
  FUN_100401b14(0);
  local_50 = param_1;
  FUN_1003fb48c(FUN_10011cfb0,auStack_60,0xd000000000000092,0x8000000100882970,0xd000000000000014,
                0x800000010088d520,0x308,0);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  cVar1 = param_1[0x28];
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar2 = 0;
  _CGEventCreateMouseEvent
            (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0,
             *(undefined4 *)(&DAT_10080e040 + (long)*param_1 * 4),0);
  if (lVar2 != 0) {
    uVar5 = 0x3fe0000000000000;
    if (cVar1 == '\0') {
      uVar5 = uVar4;
    }
    _CGEventSetIntegerValueField(lVar2,0,uVar3);
    _CGEventSetDoubleValueField(uVar5,lVar2,2);
    _CGEventPost(0,lVar2);
  }
  return lVar2 != 0;
}

