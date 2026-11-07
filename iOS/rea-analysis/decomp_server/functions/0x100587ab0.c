// rea decompile_all
// name: FUN_100587ab0
// address: 0x100587ab0
// body: available
// range: 0x100587ab0-0x1005880bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100587ab0(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auStack_1a0 [24];
  ulong local_188;
  long lStack_180;
  undefined1 auStack_178 [24];
  long local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  ulong local_148;
  long local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  ulong uStack_128;
  undefined8 local_120;
  undefined1 auStack_118 [24];
  ulong local_100;
  long lStack_f8;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x20,auStack_78,0,0);
  lVar4 = *(long *)(param_1 + 0x20);
  lVar7 = lVar4;
  _swift_bridgeObjectRetain();
  FUN_10056a650();
  _swift_bridgeObjectRelease(lVar4);
  lVar3 = *(long *)(lVar7 + 0x10);
  uVar6 = 0xffffffffffffffff;
  lVar4 = lVar7 + 0x20;
  do {
    if (uVar6 - lVar3 == -1) {
      _swift_bridgeObjectRelease(lVar7);
      _swift_beginAccess(param_1 + 0x28,auStack_90,0,0);
      lVar4 = *(long *)(param_1 + 0x28);
      lVar7 = lVar4;
      _swift_bridgeObjectRetain();
      FUN_10056a650();
      _swift_bridgeObjectRelease(lVar4);
      lVar3 = *(long *)(lVar7 + 0x10);
      uVar6 = 0xffffffffffffffff;
      lVar4 = lVar7 + 0x20;
      goto LAB_100587bc0;
    }
    uVar6 = uVar6 + 1;
    if (*(ulong *)(lVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100588080);
      (*pcVar2)();
    }
    FUN_1000b142c(lVar4,&local_160);
    lVar1 = local_140;
    uVar12 = local_148;
    FUN_10003f030(&local_160,local_148);
    (**(code **)(lVar1 + 0x20))(uVar12,lVar1);
    FUN_10003f094(&local_160);
    lVar4 = lVar4 + 0x28;
  } while ((uVar12 & 1) != 0);
  goto LAB_100587ef0;
  while( true ) {
    uVar6 = uVar6 + 1;
    if (*(ulong *)(lVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100588084);
      (*pcVar2)();
    }
    FUN_1000b142c(lVar4,&local_160);
    lVar1 = local_140;
    uVar12 = local_148;
    FUN_10003f030(&local_160,local_148);
    (**(code **)(lVar1 + 0x20))(uVar12,lVar1);
    FUN_10003f094(&local_160);
    lVar4 = lVar4 + 0x28;
    if ((uVar12 & 1) == 0) break;
LAB_100587bc0:
    if (uVar6 - lVar3 == -1) {
      _swift_bridgeObjectRelease(lVar7);
      _swift_beginAccess(param_1 + 0x30,auStack_a8,0,0);
      lVar4 = *(long *)(param_1 + 0x30);
      lVar7 = lVar4;
      _swift_bridgeObjectRetain();
      FUN_10056abdc();
      _swift_bridgeObjectRelease(lVar4);
      lVar3 = *(long *)(lVar7 + 0x10);
      uVar6 = 0xffffffffffffffff;
      lVar4 = lVar7 + 0x20;
      goto LAB_100587c7c;
    }
  }
  goto LAB_100587ef0;
  while( true ) {
    uVar6 = uVar6 + 1;
    if (*(ulong *)(lVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100588088);
      (*pcVar2)();
    }
    FUN_1000b142c(lVar4,&local_160);
    lVar1 = local_140;
    uVar12 = local_148;
    FUN_10003f030(&local_160,local_148);
    (**(code **)(lVar1 + 0x20))(uVar12,lVar1);
    FUN_10003f094(&local_160);
    lVar4 = lVar4 + 0x28;
    if ((uVar12 & 1) == 0) break;
LAB_100587c7c:
    if (uVar6 - lVar3 == -1) {
      _swift_bridgeObjectRelease(lVar7);
      _swift_beginAccess(param_1 + 0x38,auStack_c0,0,0);
      lVar4 = *(long *)(param_1 + 0x38);
      lVar7 = lVar4;
      _swift_bridgeObjectRetain();
      FUN_10056abdc();
      _swift_bridgeObjectRelease(lVar4);
      lVar3 = *(long *)(lVar7 + 0x10);
      uVar6 = 0xffffffffffffffff;
      lVar4 = lVar7 + 0x20;
      goto LAB_100587d38;
    }
  }
  goto LAB_100587ef0;
  while( true ) {
    uVar6 = uVar6 + 1;
    if (*(ulong *)(lVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005880b4);
      (*pcVar2)();
    }
    FUN_1000b142c(lVar4,&local_160);
    lVar1 = local_140;
    uVar12 = local_148;
    FUN_10003f030(&local_160,local_148);
    (**(code **)(lVar1 + 0x20))(uVar12,lVar1);
    FUN_10003f094(&local_160);
    lVar4 = lVar4 + 0x28;
    if ((uVar12 & 1) == 0) break;
LAB_100587d38:
    if (uVar6 - lVar3 == -1) {
      _swift_bridgeObjectRelease(lVar7);
      _swift_beginAccess(param_1 + 0x40,auStack_d8,0,0);
      lVar4 = *(long *)(param_1 + 0x40);
      lVar7 = lVar4;
      _swift_bridgeObjectRetain();
      FUN_10056a948();
      _swift_bridgeObjectRelease(lVar4);
      lVar3 = *(long *)(lVar7 + 0x10);
      uVar6 = 0xffffffffffffffff;
      lVar4 = lVar7 + 0x20;
      goto LAB_100587de4;
    }
  }
  goto LAB_100587ef0;
  while( true ) {
    uVar6 = uVar6 + 1;
    if (*(ulong *)(lVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005880b8);
      (*pcVar2)();
    }
    FUN_1000b142c(lVar4,&local_160);
    lVar1 = local_140;
    uVar12 = local_148;
    FUN_10003f030(&local_160,local_148);
    (**(code **)(lVar1 + 0x20))(uVar12,lVar1);
    FUN_10003f094(&local_160);
    lVar4 = lVar4 + 0x28;
    if ((uVar12 & 1) == 0) break;
LAB_100587de4:
    if (uVar6 - lVar3 == -1) {
      _swift_bridgeObjectRelease(lVar7);
      _swift_beginAccess(param_1 + 0x48,auStack_f0,0,0);
      lVar4 = *(long *)(param_1 + 0x48);
      lVar7 = lVar4;
      _swift_bridgeObjectRetain();
      FUN_10056aa9c();
      _swift_bridgeObjectRelease(lVar4);
      lVar3 = *(long *)(lVar7 + 0x10);
      uVar6 = 0xffffffffffffffff;
      lVar4 = lVar7 + 0x20;
      goto LAB_100587e90;
    }
  }
  goto LAB_100587ef0;
  while( true ) {
    uVar6 = uVar6 + 1;
    if (*(ulong *)(lVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005880bc);
      (*pcVar2)();
    }
    FUN_1000b142c(lVar4,auStack_118);
    lVar1 = lStack_f8;
    uVar12 = local_100;
    FUN_10003f030(auStack_118,local_100);
    (**(code **)(lVar1 + 0x20))(uVar12,lVar1);
    FUN_10003f094(auStack_118);
    lVar4 = lVar4 + 0x28;
    if ((uVar12 & 1) == 0) break;
LAB_100587e90:
    if (uVar6 - lVar3 == -1) {
      _swift_bridgeObjectRelease(lVar7);
      _swift_beginAccess(param_1 + 0x50,auStack_178,0,0);
      uVar8 = *(undefined8 *)(param_1 + 0x78);
      local_140 = *(undefined8 *)(param_1 + 0x70);
      uVar12 = *(ulong *)(param_1 + 0x88);
      uVar10 = *(undefined8 *)(param_1 + 0x80);
      uVar5 = *(undefined8 *)(param_1 + 0x90);
      uVar9 = *(undefined8 *)(param_1 + 0x58);
      lVar7 = *(long *)(param_1 + 0x50);
      uVar6 = *(ulong *)(param_1 + 0x68);
      uVar11 = *(undefined8 *)(param_1 + 0x60);
      if (lVar7 == 0) {
        return 1;
      }
      local_160 = lVar7;
      uStack_158 = uVar9;
      local_150 = uVar11;
      local_148 = uVar6;
      uStack_138 = uVar8;
      local_130 = uVar10;
      uStack_128 = uVar12;
      local_120 = uVar5;
      _swift_bridgeObjectRetain(lVar7);
      FUN_100008184(uVar9,uVar11);
      _swift_bridgeObjectRetain(uVar6);
      FUN_1005a7f54(uVar8,uVar10,uVar12,uVar5);
      FUN_100510c38();
      if ((uVar6 & 1) == 0) goto LAB_100588060;
      if (uVar12 != 0) {
        FUN_100008184(uVar8,uVar10);
        uVar6 = uVar12;
        _swift_bridgeObjectRetain();
        FUN_100510c38();
        FUN_100541944(uVar8,uVar10,uVar12,uVar5);
        if ((uVar6 & 1) == 0) goto LAB_100588060;
      }
      FUN_10056a264();
      lVar3 = *(long *)(lVar7 + 0x10);
      uVar6 = 0xffffffffffffffff;
      lVar4 = lVar7 + 0x20;
      do {
        if (uVar6 - lVar3 == -1) {
          _swift_bridgeObjectRelease(lVar7);
          FUN_100040bb4(&local_160,&DAT_100aab4c8,&DAT_100837c38);
          return 1;
        }
        uVar6 = uVar6 + 1;
        if (*(ulong *)(lVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005880c0);
          (*pcVar2)();
        }
        FUN_1000b142c(lVar4,auStack_1a0);
        lVar1 = lStack_180;
        uVar12 = local_188;
        FUN_10003f030(auStack_1a0,local_188);
        (**(code **)(lVar1 + 0x20))(uVar12,lVar1);
        FUN_10003f094(auStack_1a0);
        lVar4 = lVar4 + 0x28;
      } while ((uVar12 & 1) != 0);
      _swift_bridgeObjectRelease(lVar7);
LAB_100588060:
      FUN_100040bb4(&local_160,&DAT_100aab4c8,&DAT_100837c38);
      return 0;
    }
  }
LAB_100587ef0:
  _swift_bridgeObjectRelease(lVar7);
  return 0;
}

