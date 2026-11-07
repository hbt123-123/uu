// rea decompile_all
// name: FUN_100517c28
// address: 0x100517c28
// body: available
// range: 0x100517c28-0x100517dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100517c28(long param_1,ulong param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [40];
  undefined1 local_70;
  undefined1 auStack_68 [24];
  
  if ((param_2 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x18);
    lVar3 = *(long *)(param_1 + 0x20);
    FUN_10003f030(param_1,uVar2);
    (**(code **)(lVar3 + 0x20))(uVar2,lVar3);
    if ((uVar2 & 1) == 0) {
      _swift_bridgeObjectRelease();
      FUN_1004f97f4();
      _swift_allocError(&DAT_1009ce218,param_4,0,0);
      *param_4 = 1;
      _swift_willThrow();
      FUN_10003f094(param_1);
      return;
    }
  }
  if (DAT_100aa2690 != -1) {
    _swift_once(&DAT_100aa2690,FUN_1004f664c);
  }
  uVar2 = DAT_100b39640;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10003f030(param_1,uVar5);
  _swift_retain(uVar2);
  FUN_10051940c(lVar3,param_3,param_4,uVar5,uVar1);
  _swift_bridgeObjectRelease(param_4);
  uVar4 = uVar2;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_1004f71ec(0);
    _swift_allocObject();
    FUN_1004f668c(uVar2,uVar5);
  }
  _swift_beginAccess(uVar2 + 0x10,auStack_68,1,0);
  uVar5 = *(undefined8 *)(uVar2 + 0x18);
  *(long *)(uVar2 + 0x10) = lVar3;
  *(undefined8 *)(uVar2 + 0x18) = param_3;
  _swift_bridgeObjectRelease(uVar5);
  FUN_1000b142c(param_1,auStack_98);
  local_70 = 1;
  _swift_beginAccess(uVar2 + 0x20,auStack_b0,0x21,0);
  FUN_1004f99e8(auStack_98,uVar2 + 0x20);
  _swift_endAccess(auStack_b0);
  FUN_10003f094(param_1);
  return;
}

