// rea decompile_all
// name: FUN_10007b83c
// address: 0x10007b83c
// body: available
// range: 0x10007b83c-0x10007b8eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007b83c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *unaff_x20;
  lVar2 = *(long *)(lVar4 + 0x50);
  lVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  lVar3 = unaff_x20[2];
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))
            (&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_2,lVar2);
  uVar5 = *(undefined8 *)(lVar4 + 0x58);
  _swift_bridgeObjectRetain(lVar3);
  FUN_100096aa4(&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),lVar3,lVar2,uVar5);
  FUN_10007b724(param_1);
  _swift_bridgeObjectRelease(lVar2);
  _swift_bridgeObjectRelease(lVar3);
  return;
}

