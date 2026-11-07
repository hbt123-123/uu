// rea decompile_all
// name: FUN_1000fa558
// address: 0x1000fa558
// body: available
// range: 0x1000fa558-0x1000fa9bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000fa558(undefined8 param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  byte local_71;
  
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&local_80 + lVar1;
  bVar2 = 1 < (ulong)param_2[2];
  if ((*(byte *)(param_2 + 3) & 1) == 0) {
    bVar2 = param_2[2] == 2;
  }
  local_71 = 0;
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    lVar5 = *param_2;
    if (lVar5 < 2) {
      if (lVar5 == 0) goto LAB_1000fa8d4;
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      lVar5 = *(long *)(DAT_100b360a8 + 0x48);
      _swift_retain(lVar5);
      __s10Foundation4DateVACycfC(lVar6);
      __s10Foundation4DateV21timeIntervalSince1970Sdvg();
      (**(code **)(lVar7 + 8))(lVar6,lVar4);
      lVar4 = *(long *)(lVar5 + 0x10);
      local_80 = *(undefined8 *)(lVar4 + _TtC14UURemoteServer12InputHandler::controller);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined1 *)((long)&uStack_90 + lVar1) = 0;
      *(bool *)((long)&uStack_90 + lVar1 + 1) = bVar2;
      *(undefined8 *)((long)&uStack_88 + lVar1) = param_1;
      _swift_unknownObjectRetain(lVar4);
      FUN_1003fb48c(thunk_FUN_1000fcd1c,(long)&lStack_a0 + lVar1,0xd000000000000092,
                    0x8000000100882970,&DAT_d000000000000018,0x800000010088a1c0,0x36c,0);
      bVar3 = bVar2;
      FUN_100119d7c();
    }
    else {
      if (lVar5 != 2) {
        if (DAT_100a73b60 != -1) {
          _swift_once(&DAT_100a73b60,FUN_1000efc4c);
        }
        __s10Foundation4DateVACycfC(lVar6);
        __s10Foundation4DateV21timeIntervalSince1970Sdvg();
        (**(code **)(lVar7 + 8))(lVar6,lVar4);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined1 *)((long)&uStack_90 + lVar1) = 2;
        *(bool *)((long)&uStack_90 + lVar1 + 1) = bVar2;
        *(undefined8 *)((long)&uStack_88 + lVar1) = param_1;
        FUN_1003fb48c(thunk_FUN_1000fcd1c,(long)&lStack_a0 + lVar1,0xd000000000000092,
                      0x8000000100882970,&DAT_d000000000000018,0x800000010088a1c0,0x36c,0);
        FUN_1003fb4ec(FUN_100119d50,0,0xd000000000000092,0x8000000100882970,&DAT_d000000000000018,
                      0x800000010088a1c0,0x373,0);
        local_71 = 0;
        goto LAB_1000fa8d4;
      }
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      lVar5 = *(long *)(DAT_100b360a8 + 0x48);
      _swift_retain(lVar5);
      __s10Foundation4DateVACycfC(lVar6);
      __s10Foundation4DateV21timeIntervalSince1970Sdvg();
      (**(code **)(lVar7 + 8))(lVar6,lVar4);
      lVar4 = *(long *)(lVar5 + 0x10);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined1 *)((long)&uStack_90 + lVar1) = 1;
      *(bool *)((long)&uStack_90 + lVar1 + 1) = bVar2;
      *(undefined8 *)((long)&uStack_88 + lVar1) = param_1;
      _swift_unknownObjectRetain(lVar4);
      FUN_1003fb48c(thunk_FUN_1000fcd1c,(long)&lStack_a0 + lVar1,0xd000000000000092,
                    0x8000000100882970,&DAT_d000000000000018,0x800000010088a1c0,0x36c,0);
      bVar3 = 0;
      FUN_10011c148(0x200000,bVar2);
    }
    _swift_release(lVar5);
    _swift_unknownObjectRelease(lVar4);
    local_71 = bVar3 & 1;
  }
LAB_1000fa8d4:
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(long **)((long)&lStack_a0 + lVar1) = param_2;
  auStack_98[lVar1] = bVar2;
  *(byte **)((long)&uStack_90 + lVar1) = &local_71;
  FUN_1003fb48c(FUN_1000fcd08,auStack_b0 + lVar1,0xd0000000000000a2,0x80000001008898a0,
                0xd000000000000027,0x800000010088a190,0x2c,0);
  return;
}

