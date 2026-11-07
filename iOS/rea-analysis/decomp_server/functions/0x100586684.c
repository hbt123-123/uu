// rea decompile_all
// name: FUN_100586684
// address: 0x100586684
// body: available
// range: 0x100586684-0x1005869df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100586684(void)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_78 [24];
  ulong local_60;
  long lStack_58;
  
  lVar4 = *(long *)(unaff_x20 + 0x20);
  FUN_10056abdc(lVar4,&DAT_1009d46c8,FUN_1005a8594);
  lVar6 = *(long *)(lVar4 + 0x10);
  uVar10 = 0xffffffffffffffff;
  lVar8 = lVar4 + 0x20;
  do {
    if (uVar10 - lVar6 == -1) {
      _swift_bridgeObjectRelease(lVar4);
      lVar4 = *(long *)(unaff_x20 + 0x28);
      FUN_10056abdc(lVar4,&DAT_1009d4c58,FUN_1005a85d4);
      lVar6 = *(long *)(lVar4 + 0x10);
      uVar10 = 0xffffffffffffffff;
      lVar8 = lVar4 + 0x20;
      goto LAB_100586768;
    }
    uVar10 = uVar10 + 1;
    if (*(ulong *)(lVar4 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005869d4);
      (*pcVar3)();
    }
    FUN_1000b142c(lVar8,auStack_78);
    lVar2 = lStack_58;
    uVar5 = local_60;
    FUN_10003f030(auStack_78,local_60);
    (**(code **)(lVar2 + 0x20))(uVar5,lVar2);
    FUN_10003f094(auStack_78);
    lVar8 = lVar8 + 0x28;
  } while ((uVar5 & 1) != 0);
  goto LAB_1005868d8;
  while( true ) {
    uVar10 = uVar10 + 1;
    if (*(ulong *)(lVar4 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005869d8);
      (*pcVar3)();
    }
    FUN_1000b142c(lVar8,auStack_78);
    lVar2 = lStack_58;
    uVar5 = local_60;
    FUN_10003f030(auStack_78,local_60);
    (**(code **)(lVar2 + 0x20))(uVar5,lVar2);
    FUN_10003f094(auStack_78);
    lVar8 = lVar8 + 0x28;
    if ((uVar5 & 1) == 0) break;
LAB_100586768:
    if (uVar10 - lVar6 == -1) {
      _swift_bridgeObjectRelease(lVar4);
      lVar4 = *(long *)(unaff_x20 + 0x30);
      FUN_10056a4fc();
      lVar6 = *(long *)(lVar4 + 0x10);
      uVar10 = 0xffffffffffffffff;
      lVar8 = lVar4 + 0x20;
      goto LAB_1005867f0;
    }
  }
  goto LAB_1005868d8;
  while( true ) {
    uVar10 = uVar10 + 1;
    if (*(ulong *)(lVar4 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005869dc);
      (*pcVar3)();
    }
    FUN_1000b142c(lVar8,auStack_78);
    lVar2 = lStack_58;
    uVar5 = local_60;
    FUN_10003f030(auStack_78,local_60);
    (**(code **)(lVar2 + 0x20))(uVar5,lVar2);
    FUN_10003f094(auStack_78);
    lVar8 = lVar8 + 0x28;
    if ((uVar5 & 1) == 0) break;
LAB_1005867f0:
    if (uVar10 - lVar6 == -1) {
      _swift_bridgeObjectRelease(lVar4);
      lVar4 = *(long *)(unaff_x20 + 0x38);
      FUN_10056a650();
      lVar6 = *(long *)(lVar4 + 0x10);
      uVar10 = 0xffffffffffffffff;
      lVar8 = lVar4 + 0x20;
      do {
        if (uVar10 - lVar6 == -1) {
          _swift_bridgeObjectRelease(lVar4);
          uVar10 = *(ulong *)(unaff_x20 + 0x80);
          if (uVar10 != 0) {
            uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
            uVar7 = *(undefined8 *)(unaff_x20 + 0x78);
            uVar9 = *(ulong *)(unaff_x20 + 0x88);
            FUN_100008184(uVar1,uVar7);
            _swift_bridgeObjectRetain(uVar10);
            _swift_retain(uVar9);
            uVar5 = uVar10;
            FUN_100510c38();
            if ((uVar5 & 1) == 0) {
              FUN_1005419ec(uVar1,uVar7,uVar10,uVar9);
              return 0;
            }
            uVar5 = uVar9;
            FUN_100592ae4();
            FUN_1005419ec(uVar1,uVar7,uVar10,uVar9);
            if ((uVar5 & 1) == 0) {
              return 0;
            }
          }
          lVar8 = *(long *)(unaff_x20 + 0x90);
          if (lVar8 != 0) {
            uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
            uVar10 = *(ulong *)(unaff_x20 + 0xa8);
            uVar7 = *(undefined8 *)(unaff_x20 + 0x98);
            _swift_bridgeObjectRetain(lVar8);
            FUN_100008184(uVar7,uVar1);
            uVar5 = uVar10;
            _swift_bridgeObjectRetain();
            FUN_100510c38();
            FUN_100541a94(lVar8,uVar7,uVar1,uVar10);
            if ((uVar5 & 1) == 0) {
              return 0;
            }
          }
          return 1;
        }
        uVar10 = uVar10 + 1;
        if (*(ulong *)(lVar4 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1005869e0);
          (*pcVar3)();
        }
        FUN_1000b142c(lVar8,auStack_78);
        lVar2 = lStack_58;
        uVar5 = local_60;
        FUN_10003f030(auStack_78,local_60);
        (**(code **)(lVar2 + 0x20))(uVar5,lVar2);
        FUN_10003f094(auStack_78);
        lVar8 = lVar8 + 0x28;
      } while ((uVar5 & 1) != 0);
      break;
    }
  }
LAB_1005868d8:
  _swift_bridgeObjectRelease(lVar4);
  return 0;
}

