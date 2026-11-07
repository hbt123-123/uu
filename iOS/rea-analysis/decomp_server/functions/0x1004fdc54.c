// rea decompile_all
// name: FUN_1004fdc54
// address: 0x1004fdc54
// body: available
// range: 0x1004fdc54-0x1004fdea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fdc54(ulong *param_1)

{
  code *pcVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar7;
  ulong *puVar8;
  undefined4 uVar9;
  
  puVar2 = param_1;
  if (*(char *)((long)unaff_x20 + 0x21) == '\x02') {
    FUN_1004fdea4();
    if (unaff_x21 != 0) {
      return;
    }
    if (puVar2 != (ulong *)0x0) {
      if (((((ulong)puVar2 & 3) == 0) && (puVar8 = (ulong *)unaff_x20[1], -1 < (long)puVar8)) &&
         (puVar2 <= puVar8)) {
        uVar7 = (ulong)puVar2 >> 2;
        puVar6 = (ulong *)*param_1;
        uVar3 = puVar6[2];
        if (SCARRY8(uVar3,uVar7)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1004fdea4);
          (*pcVar1)();
        }
        puVar2 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)puVar2 == 0) || ((long)(puVar6[3] >> 1) < (long)(uVar3 + uVar7))) {
          FUN_1005074b4();
          puVar6 = puVar2;
        }
        *param_1 = (ulong)puVar6;
        if (3 < (long)puVar8) {
          puVar4 = (undefined1 *)((long)puVar8 + 4);
          do {
            uVar9 = *(undefined4 *)*unaff_x20;
            *unaff_x20 = (long)((undefined4 *)*unaff_x20 + 1);
            unaff_x20[1] = (long)(puVar4 + -8);
            uVar3 = puVar6[2];
            if (puVar6[3] >> 1 <= uVar3) {
              puVar2 = (ulong *)(ulong)(1 < puVar6[3]);
              FUN_1005074b4(puVar2,uVar3 + 1,1,puVar6);
              puVar6 = puVar2;
            }
            puVar6[2] = uVar3 + 1;
            *(undefined4 *)((long)puVar6 + uVar3 * 4 + 0x20) = uVar9;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              *param_1 = (ulong)puVar6;
              goto LAB_1004fde2c;
            }
            puVar4 = puVar4 + -4;
          } while (7 < (long)puVar4);
        }
        *param_1 = (ulong)puVar6;
      }
      goto LAB_1004fdcfc;
    }
  }
  else {
    if (*(char *)((long)unaff_x20 + 0x21) != '\x05') {
      return;
    }
    if (unaff_x20[1] < 4) {
LAB_1004fdcfc:
      FUN_100506290();
      _swift_allocError(&DAT_1009cdf18,puVar2,0,0);
      *(undefined1 *)puVar2 = 1;
      _swift_willThrow();
      return;
    }
    uVar9 = *(undefined4 *)*unaff_x20;
    *unaff_x20 = (long)((undefined4 *)*unaff_x20 + 1);
    unaff_x20[1] = unaff_x20[1] + -4;
    uVar5 = *param_1;
    uVar7 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar7 & 1) == 0) {
      uVar3 = 0;
      FUN_1005074b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar7 = *(ulong *)(uVar3 + 0x10);
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar7) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_1005074b4(uVar5,uVar7 + 1,1,uVar3);
      uVar3 = uVar5;
    }
    *(ulong *)(uVar3 + 0x10) = uVar7 + 1;
    *(undefined4 *)(uVar3 + uVar7 * 4 + 0x20) = uVar9;
    *param_1 = uVar3;
  }
LAB_1004fde2c:
  *(undefined1 *)(unaff_x20 + 4) = 1;
  return;
}

