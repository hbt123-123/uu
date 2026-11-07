// rea decompile_all
// name: FUN_1002c3840
// address: 0x1002c3840
// body: available
// range: 0x1002c3840-0x1002c3967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c3840(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar5 = *(long *)(lVar1 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  if (DAT_100a81bf0 != -1) {
    _swift_once(&DAT_100a81bf0,FUN_100357644);
  }
  lVar2 = lVar1;
  FUN_10021bec0(lVar1,&DAT_100b36600);
  (**(code **)(lVar5 + 0x10))
            (&stack0xffffffffffffffd0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),lVar2,lVar1);
  lVar3 = 0;
  FUN_100357868();
  _swift_allocObject();
  *(undefined1 *)(lVar3 + 0x10) = 1;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined1 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 1;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined1 *)(lVar3 + 0x50) = 2;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(code **)(lVar3 + 0x68) = FUN_1003505f0;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(code **)(lVar3 + 0x78) = FUN_1000048e8;
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(undefined1 *)(lVar3 + 0x88) = 0;
  lVar2 = lVar3 + _TtC9Alamofire21URLEncodedFormEncoder::allowedCharacters;
  (**(code **)(lVar5 + 0x20))
            (lVar2,&stack0xffffffffffffffd0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),lVar1);
  FUN_1002c3ae0();
  _swift_allocObject();
  *(long *)(lVar2 + 0x10) = lVar3;
  *(undefined1 *)(lVar2 + 0x18) = 0;
  return;
}

