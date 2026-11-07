// rea decompile_all
// name: FUN_100454cc8
// address: 0x100454cc8
// body: available
// range: 0x100454cc8-0x10045509b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100454cc8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  long local_150;
  undefined1 local_148;
  undefined1 auStack_140 [24];
  long local_128;
  undefined1 local_120;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  long local_c8;
  undefined1 local_c0;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  if ((*(int *)(param_1 + 0x10) == 0) ||
     ((**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x10),1,param_3,param_4), unaff_x21 == 0)) {
    _swift_beginAccess(param_1 + 0x14,auStack_80,0,0);
    if ((*(int *)(param_1 + 0x14) == 0) ||
       ((**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x14),2,param_3,param_4), unaff_x21 == 0))
    {
      _swift_beginAccess(param_1 + 0x18,auStack_98,0,0);
      lVar4 = *(long *)(param_1 + 0x18);
      if (*(long *)(lVar4 + 0x10) != 0) {
        pcVar5 = *(code **)(param_4 + 0x118);
        FUN_10046058c();
        _swift_bridgeObjectRetain(lVar4);
        (*pcVar5)();
        _swift_bridgeObjectRelease(lVar4);
        if (unaff_x21 != 0) {
          return;
        }
      }
      FUN_10045509c(param_1,param_2,param_3,param_4);
      if (unaff_x21 == 0) {
        lVar4 = param_1 + 0x48;
        _swift_beginAccess(lVar4,auStack_b0,0,0);
        if (*(long *)(param_1 + 0x48) != 0) {
          local_c0 = *(undefined1 *)(param_1 + 0x50);
          pcVar5 = *(code **)(param_4 + 0x80);
          local_c8 = *(long *)(param_1 + 0x48);
          FUN_100464ce0();
          (*pcVar5)(&local_c8,5,&DAT_1009c0470,lVar4,param_3,param_4);
        }
        FUN_10045515c(param_1,param_2,param_3,param_4);
        _swift_beginAccess(param_1 + 0x80,&local_c8,0,0);
        if (*(char *)(param_1 + 0x80) == '\x01') {
          (**(code **)(param_4 + 0x68))(1,7,param_3,param_4);
        }
        _swift_beginAccess(param_1 + 0x88,auStack_e0,0,0);
        if (*(long *)(param_1 + 0x88) != 0) {
          (**(code **)(param_4 + 0x10))(8,param_3,param_4);
        }
        FUN_10045521c(param_1,param_2,param_3,param_4);
        _swift_beginAccess(param_1 + 0xb0,auStack_f8,0,0);
        uVar2 = *(ulong *)(param_1 + 0xb0);
        uVar3 = *(ulong *)(param_1 + 0xb8);
        uVar1 = uVar2 & 0xffffffffffff;
        if ((uVar3 & 0x2000000000000000) != 0) {
          uVar1 = uVar3 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          pcVar5 = *(code **)(param_4 + 0x70);
          _swift_bridgeObjectRetain(uVar3);
          (*pcVar5)(uVar2,uVar3,10,param_3,param_4);
          _swift_bridgeObjectRelease(uVar3);
        }
        lVar4 = param_1 + 0xc0;
        _swift_beginAccess(lVar4,auStack_110,0,0);
        if (*(long *)(param_1 + 0xc0) != 0) {
          local_120 = *(undefined1 *)(param_1 + 200);
          pcVar5 = *(code **)(param_4 + 0x80);
          local_128 = *(long *)(param_1 + 0xc0);
          FUN_10043c840();
          (*pcVar5)(&local_128,0xb,&DAT_1009c0500,lVar4,param_3,param_4);
        }
        _swift_beginAccess(param_1 + 0xcc,&local_128,0,0);
        if (*(int *)(param_1 + 0xcc) != 0) {
          (**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0xcc),0xc,param_3,param_4);
        }
        lVar4 = param_1 + 0xd0;
        _swift_beginAccess(lVar4,auStack_140,0,0);
        local_150 = *(long *)(param_1 + 0xd0);
        if (local_150 != 0) {
          local_148 = *(undefined1 *)(param_1 + 0xd8);
          pcVar5 = *(code **)(param_4 + 0x80);
          FUN_100464d20();
          (*pcVar5)(&local_150,0xd,&DAT_1009c0a10,lVar4,param_3,param_4);
        }
      }
    }
  }
  return;
}

