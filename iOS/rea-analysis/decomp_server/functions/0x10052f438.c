// rea decompile_all
// name: FUN_10052f438
// address: 0x10052f438
// body: available
// range: 0x10052f438-0x10052f94b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10052f438(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  uVar8 = unaff_x20[9];
  FUN_10052d69c(param_2);
  if ((char)uVar8 == '\x01') {
    if (unaff_x21 != 0) {
      return;
    }
    uVar5 = *unaff_x20;
    uVar8 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar8 & 1) == 0) {
      uVar3 = 0;
      FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar8 = *(ulong *)(uVar3 + 0x10);
    uVar6 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_100506f84(uVar6,uVar8 + 1,1,uVar3);
    }
    *(ulong *)(uVar6 + 0x10) = uVar8 + 1;
    *(undefined1 *)(uVar6 + uVar8 + 0x20) = 0x5b;
    *unaff_x20 = uVar6;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      lVar7 = *(long *)(param_1 + 0x20);
      if (lVar7 < 0) {
        uVar8 = uVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = uVar6;
        if ((uVar8 & 1) == 0) {
          uVar3 = 0;
          FUN_100506f84(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
        }
        uVar8 = *(ulong *)(uVar3 + 0x10);
        uVar5 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          FUN_100506f84(uVar5,uVar8 + 1,1,uVar3);
        }
        *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
        *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x2d;
        *unaff_x20 = uVar5;
        lVar7 = -lVar7;
      }
      FUN_10052badc(lVar7);
      lVar9 = lVar9 + -1;
      if (lVar9 != 0) {
        plVar10 = (long *)(param_1 + 0x28);
        do {
          lVar7 = *plVar10;
          uVar5 = *unaff_x20;
          uVar8 = uVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar3 = uVar5;
          if ((uVar8 & 1) == 0) {
            uVar3 = 0;
            FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar8 = *(ulong *)(uVar3 + 0x10);
          uVar5 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_100506f84(uVar5,uVar8 + 1,1,uVar3);
          }
          *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
          *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x2c;
          *unaff_x20 = uVar5;
          if (lVar7 < 0) {
            uVar8 = uVar5;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar3 = uVar5;
            if ((uVar8 & 1) == 0) {
              uVar3 = 0;
              FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
            }
            uVar8 = *(ulong *)(uVar3 + 0x10);
            uVar5 = uVar3;
            if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
              uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
              FUN_100506f84(uVar5,uVar8 + 1,1,uVar3);
            }
            *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
            *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x2d;
            *unaff_x20 = uVar5;
            lVar7 = -lVar7;
          }
          FUN_10052badc(lVar7);
          lVar9 = lVar9 + -1;
          plVar10 = plVar10 + 1;
        } while (lVar9 != 0);
      }
      uVar6 = *unaff_x20;
    }
    uVar8 = uVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar6;
    if ((uVar8 & 1) == 0) {
      uVar5 = 0;
      FUN_100506f84(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    }
  }
  else {
    if (unaff_x21 != 0) {
      return;
    }
    uVar5 = *unaff_x20;
    uVar8 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar8 & 1) == 0) {
      uVar3 = 0;
      FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar8 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_100506f84(uVar5,uVar8 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
    *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x5b;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      bVar4 = false;
      plVar10 = (long *)(param_1 + 0x20);
      do {
        lVar7 = *plVar10;
        uVar8 = *(ulong *)(uVar5 + 0x10);
        if (bVar4) {
          uVar3 = uVar8 + 1;
          uVar6 = uVar5;
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar8) {
            uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            FUN_100506f84(uVar6,uVar3,1,uVar5);
          }
          *(ulong *)(uVar6 + 0x10) = uVar3;
          *(undefined1 *)(uVar6 + uVar8 + 0x20) = 0x2c;
          uVar5 = uVar6;
          uVar8 = uVar3;
        }
        lVar1 = uVar8 + 1;
        uVar3 = uVar5;
        if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar8) {
          uVar3 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
          FUN_100506f84(uVar3,lVar1,1,uVar5);
        }
        *(long *)(uVar3 + 0x10) = lVar1;
        *(undefined1 *)(uVar3 + uVar8 + 0x20) = 0x22;
        *unaff_x20 = uVar3;
        if (lVar7 < 0) {
          lVar2 = uVar8 + 2;
          uVar8 = uVar3;
          if ((long)(*(ulong *)(uVar3 + 0x18) >> 1) < lVar2) {
            uVar8 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_100506f84(uVar8,lVar2,1,uVar3);
          }
          *(long *)(uVar8 + 0x10) = lVar2;
          *(undefined1 *)(uVar8 + lVar1 + 0x20) = 0x2d;
          *unaff_x20 = uVar8;
          lVar7 = -lVar7;
        }
        FUN_10052badc(lVar7);
        uVar5 = *unaff_x20;
        uVar8 = uVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = uVar5;
        if ((uVar8 & 1) == 0) {
          uVar3 = 0;
          FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
        }
        uVar8 = *(ulong *)(uVar3 + 0x10);
        uVar5 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          FUN_100506f84(uVar5,uVar8 + 1,1,uVar3);
        }
        *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
        *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x22;
        *unaff_x20 = uVar5;
        bVar4 = true;
        lVar9 = lVar9 + -1;
        plVar10 = plVar10 + 1;
      } while (lVar9 != 0);
    }
  }
  uVar8 = *(ulong *)(uVar5 + 0x10);
  uVar3 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar8) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_100506f84(uVar3,uVar8 + 1,1,uVar5);
  }
  *(ulong *)(uVar3 + 0x10) = uVar8 + 1;
  *(undefined1 *)(uVar3 + uVar8 + 0x20) = 0x5d;
  *unaff_x20 = uVar3;
  *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  return;
}

