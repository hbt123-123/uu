// rea decompile_all
// name: FUN_100009814
// address: 0x100009814
// body: available
// range: 0x100009814-0x100009963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100009814(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_2 + 0x20,auStack_78,0,0);
  uVar4 = *(ulong *)(*(long *)(param_2 + 0x20) + 0x10);
  if (0x3f < uVar4) {
    _swift_beginAccess(param_2 + 0x20,auStack_90,0x21,0);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = 0x8000000000000000;
    puVar2 = &DAT_100a75430;
    FUN_100004bb4(&DAT_100a75430,&DAT_100809508);
    __ss17_NativeDictionaryV9removeAll8isUniqueySb_tF(uVar1,puVar2);
    *(undefined8 *)(param_2 + 0x20) = uVar3;
    _swift_endAccess(auStack_90);
  }
  _swift_beginAccess(param_2 + 0x20,auStack_90,0x21,0);
  FUN_100008184(param_4,param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _swift_isUniquelyReferenced_nonNull_native(uVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0x8000000000000000;
  FUN_100060a5c(param_4,param_5,param_3,uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar3;
  _swift_endAccess(auStack_90);
  *(bool *)param_1 = 0x3f < uVar4;
  return;
}

