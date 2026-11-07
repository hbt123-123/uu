// rea decompile_all
// name: FUN_10052ecd0
// address: 0x10052ecd0
// body: available
// range: 0x10052ecd0-0x10052f147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10052ecd0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  uVar1 = unaff_x20[9];
  FUN_10052d69c(param_2);
  if ((char)uVar1 == '\x01') {
    if (unaff_x21 != 0) {
      return;
    }
    uVar3 = *unaff_x20;
    uVar1 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_100506f84(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar4 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      FUN_100506f84(uVar4,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar4 + uVar1 + 0x20) = 0x5b;
    *unaff_x20 = uVar4;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      FUN_10052badc(*(undefined8 *)(param_1 + 0x20));
      lVar6 = lVar6 + -1;
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)(param_1 + 0x28);
        do {
          uVar5 = *puVar7;
          uVar3 = *unaff_x20;
          uVar1 = uVar3;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar2 = uVar3;
          if ((uVar1 & 1) == 0) {
            uVar2 = 0;
            FUN_100506f84(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
          }
          uVar1 = *(ulong *)(uVar2 + 0x10);
          uVar3 = uVar2;
          if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
            FUN_100506f84(uVar3,uVar1 + 1,1,uVar2);
          }
          *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x2c;
          *unaff_x20 = uVar3;
          FUN_10052badc(uVar5);
          lVar6 = lVar6 + -1;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
      }
      uVar4 = *unaff_x20;
    }
    uVar1 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_100506f84(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
  }
  else {
    if (unaff_x21 != 0) {
      return;
    }
    uVar3 = *unaff_x20;
    uVar1 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_100506f84(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar3 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      FUN_100506f84(uVar3,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x5b;
    *unaff_x20 = uVar3;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = *(ulong *)(uVar3 + 0x10);
      uVar2 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
        uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_100506f84(uVar2,uVar1 + 1,1,uVar3);
      }
      *(ulong *)(uVar2 + 0x10) = uVar1 + 1;
      *(undefined1 *)(uVar2 + uVar1 + 0x20) = 0x22;
      *unaff_x20 = uVar2;
      FUN_10052badc(uVar5);
      uVar3 = *unaff_x20;
      uVar1 = uVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar2 = uVar3;
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
        FUN_100506f84(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
      }
      uVar1 = *(ulong *)(uVar2 + 0x10);
      uVar3 = uVar2;
      if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
        uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
        FUN_100506f84(uVar3,uVar1 + 1,1,uVar2);
      }
      *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
      *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x22;
      *unaff_x20 = uVar3;
      lVar6 = lVar6 + -1;
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)(param_1 + 0x28);
        do {
          uVar5 = *puVar7;
          uVar2 = *(ulong *)(uVar3 + 0x10);
          uVar1 = uVar2 + 1;
          uVar4 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
            uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_100506f84(uVar4,uVar1,1,uVar3);
          }
          *(ulong *)(uVar4 + 0x10) = uVar1;
          *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2c;
          uVar3 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            FUN_100506f84(uVar3,uVar2 + 2,1,uVar4);
          }
          *(ulong *)(uVar3 + 0x10) = uVar2 + 2;
          *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x22;
          *unaff_x20 = uVar3;
          FUN_10052badc(uVar5);
          uVar3 = *unaff_x20;
          uVar1 = uVar3;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar2 = uVar3;
          if ((uVar1 & 1) == 0) {
            uVar2 = 0;
            FUN_100506f84(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
          }
          uVar1 = *(ulong *)(uVar2 + 0x10);
          uVar3 = uVar2;
          if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
            FUN_100506f84(uVar3,uVar1 + 1,1,uVar2);
          }
          *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x22;
          *unaff_x20 = uVar3;
          lVar6 = lVar6 + -1;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
      }
    }
  }
  uVar1 = *(ulong *)(uVar3 + 0x10);
  uVar2 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_100506f84(uVar2,uVar1 + 1,1,uVar3);
  }
  *(ulong *)(uVar2 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar2 + uVar1 + 0x20) = 0x5d;
  *unaff_x20 = uVar2;
  *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  return;
}

