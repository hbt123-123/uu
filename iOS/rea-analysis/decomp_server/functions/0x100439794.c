// rea decompile_all
// name: FUN_100439794
// address: 0x100439794
// body: available
// range: 0x100439794-0x100439b87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100439794(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x21;
  code *pcVar4;
  long lVar5;
  long local_128;
  undefined1 local_120;
  undefined1 auStack_110 [24];
  long local_f8;
  undefined1 local_f0;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  long local_80;
  undefined1 local_78;
  undefined1 auStack_68 [24];
  
  lVar5 = param_1 + 0x10;
  _swift_beginAccess(lVar5,auStack_68,0,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    local_78 = *(undefined1 *)(param_1 + 0x18);
    pcVar4 = *(code **)(param_4 + 0x80);
    local_80 = *(long *)(param_1 + 0x10);
    FUN_10043e3ac();
    (*pcVar4)(&local_80,1,&DAT_1009bfa38,lVar5,param_3,param_4);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x1c,&local_80,0,0);
  if (((*(int *)(param_1 + 0x1c) == 0) ||
      ((**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x1c),2,param_3,param_4), unaff_x21 == 0))
     && (FUN_100439b88(param_1,param_2,param_3,param_4), unaff_x21 == 0)) {
    _swift_beginAccess(param_1 + 0xb8,auStack_98,0,0);
    lVar5 = *(long *)(param_1 + 0xb8);
    if (*(long *)(lVar5 + 0x10) != 0) {
      pcVar4 = *(code **)(param_4 + 0x118);
      FUN_10043cde0();
      _swift_bridgeObjectRetain(lVar5);
      (*pcVar4)();
      _swift_bridgeObjectRelease(lVar5);
    }
    _swift_beginAccess(param_1 + 0xc0,auStack_b0,0,0);
    if (*(char *)(param_1 + 0xc0) == '\x01') {
      (**(code **)(param_4 + 0x68))(1,5,param_3,param_4);
    }
    _swift_beginAccess(param_1 + 200,auStack_c8,0,0);
    lVar5 = *(long *)(param_1 + 200);
    if (*(long *)(lVar5 + 0x10) != 0) {
      pcVar4 = *(code **)(param_4 + 0x118);
      FUN_10043cedc();
      _swift_bridgeObjectRetain(lVar5);
      (*pcVar4)();
      _swift_bridgeObjectRelease(lVar5);
    }
    FUN_100439c84(param_1,param_2,param_3,param_4);
    lVar5 = param_1 + 0xe8;
    _swift_beginAccess(lVar5,auStack_e0,0,0);
    if (*(long *)(param_1 + 0xe8) != 0) {
      local_f0 = *(undefined1 *)(param_1 + 0xf0);
      pcVar4 = *(code **)(param_4 + 0x80);
      local_f8 = *(long *)(param_1 + 0xe8);
      FUN_10043e3ec();
      (*pcVar4)(&local_f8,8,&DAT_1009c0230,lVar5,param_3,param_4);
    }
    _swift_beginAccess(param_1 + 0xf8,&local_f8,0,0);
    uVar2 = *(ulong *)(param_1 + 0xf8);
    uVar3 = *(ulong *)(param_1 + 0x100);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      pcVar4 = *(code **)(param_4 + 0x70);
      _swift_bridgeObjectRetain(uVar3);
      (*pcVar4)(uVar2,uVar3,9,param_3,param_4);
      _swift_bridgeObjectRelease(uVar3);
    }
    lVar5 = param_1 + 0x108;
    _swift_beginAccess(lVar5,auStack_110,0,0);
    if (*(long *)(param_1 + 0x108) != 0) {
      local_120 = *(undefined1 *)(param_1 + 0x110);
      pcVar4 = *(code **)(param_4 + 0x80);
      local_128 = *(long *)(param_1 + 0x108);
      FUN_10043e42c();
      (*pcVar4)(&local_128,10,&DAT_1009c0620,lVar5,param_3,param_4);
    }
    FUN_100439d30(param_1,param_2,param_3,param_4);
    _swift_beginAccess(param_1 + 0x158,&local_128,0,0);
    uVar2 = *(ulong *)(param_1 + 0x158);
    uVar3 = *(ulong *)(param_1 + 0x160);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      pcVar4 = *(code **)(param_4 + 0x70);
      _swift_bridgeObjectRetain(uVar3);
      (*pcVar4)(uVar2,uVar3,0xc,param_3,param_4);
      _swift_bridgeObjectRelease(uVar3);
    }
  }
  return;
}

