// rea decompile_all
// name: FUN_100517a2c
// address: 0x100517a2c
// body: available
// range: 0x100517a2c-0x100517c27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100517a2c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long unaff_x21;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_68;
  undefined1 auStack_58 [24];
  
  lVar4 = param_1;
  FUN_100560bb8();
  if ((*(char **)(param_1 + 0x28) == *(char **)(param_1 + 0x30)) ||
     (**(char **)(param_1 + 0x28) != '[')) {
    uVar1 = *(ulong *)(unaff_x20 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *(long *)(unaff_x20 + 0x10);
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_1004f71ec(0);
      _swift_allocObject();
      FUN_1004f668c(lVar4,uVar3);
      *(long *)(unaff_x20 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x10,auStack_58,1,0);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0xe000000000000000;
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(ulong *)(unaff_x20 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *(long *)(unaff_x20 + 0x10);
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_1004f71ec(0);
      _swift_allocObject();
      FUN_1004f668c(lVar4,uVar3);
      *(long *)(unaff_x20 + 0x10) = lVar4;
    }
    uStack_88 = 0xc000000000000000;
    local_90 = 0;
    local_68 = 0;
    _swift_beginAccess(lVar4 + 0x20,auStack_a8,0x21,0);
    FUN_1004f99e8(&local_90,lVar4 + 0x20);
    _swift_endAccess(auStack_a8);
    uVar1 = *(ulong *)(unaff_x20 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_1004f71ec(0);
      _swift_allocObject();
      FUN_1004f668c(uVar3,uVar2);
      *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
    }
    FUN_100518280();
  }
  else {
    FUN_100561d78();
    if (unaff_x21 == 0) {
      uVar1 = *(ulong *)(unaff_x20 + 0x10);
      _swift_isUniquelyReferenced_nonNull_native();
      uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
        FUN_1004f71ec(0);
        _swift_allocObject();
        FUN_1004f668c(uVar3,uVar2);
        *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
      }
      FUN_1004f7600(lVar4,param_2,param_1);
      _swift_bridgeObjectRelease(param_2);
    }
  }
  return;
}

