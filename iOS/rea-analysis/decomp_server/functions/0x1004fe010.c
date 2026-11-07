// rea decompile_all
// name: FUN_1004fe010
// address: 0x1004fe010
// body: available
// range: 0x1004fe010-0x1004fe25f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fe010(ulong *param_1)

{
  code *pcVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  
  puVar2 = param_1;
  if (*(char *)((long)unaff_x20 + 0x21) == '\x02') {
    FUN_1004fdea4();
    if (unaff_x21 != 0) {
      return;
    }
    if (puVar2 != (ulong *)0x0) {
      if (((((ulong)puVar2 & 7) == 0) && (puVar7 = (ulong *)unaff_x20[1], -1 < (long)puVar7)) &&
         (puVar2 <= puVar7)) {
        uVar6 = (ulong)puVar2 >> 3;
        puVar5 = (ulong *)*param_1;
        uVar3 = puVar5[2];
        if (SCARRY8(uVar3,uVar6)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1004fe260);
          (*pcVar1)();
        }
        puVar2 = puVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)puVar2 == 0) || ((long)(puVar5[3] >> 1) < (long)(uVar3 + uVar6))) {
          FUN_1005075b4();
          puVar5 = puVar2;
        }
        *param_1 = (ulong)puVar5;
        if (7 < (long)puVar7) {
          puVar7 = puVar7 + 1;
          do {
            uVar4 = *(ulong *)*unaff_x20;
            *unaff_x20 = (long)((ulong *)*unaff_x20 + 1);
            unaff_x20[1] = (long)(puVar7 + -2);
            uVar3 = puVar5[2];
            if (puVar5[3] >> 1 <= uVar3) {
              puVar2 = (ulong *)(ulong)(1 < puVar5[3]);
              FUN_1005075b4(puVar2,uVar3 + 1,1,puVar5);
              puVar5 = puVar2;
            }
            puVar5[2] = uVar3 + 1;
            puVar5[uVar3 + 4] = uVar4;
            uVar6 = uVar6 - 1;
            if (uVar6 == 0) {
              *param_1 = (ulong)puVar5;
              goto LAB_1004fe1e8;
            }
            puVar7 = puVar7 + -1;
          } while (0xf < (long)puVar7);
        }
        *param_1 = (ulong)puVar5;
      }
      goto LAB_1004fe0b8;
    }
  }
  else {
    if (*(char *)((long)unaff_x20 + 0x21) != '\x01') {
      return;
    }
    if (unaff_x20[1] < 8) {
LAB_1004fe0b8:
      FUN_100506290();
      _swift_allocError(&DAT_1009cdf18,puVar2,0,0);
      *(undefined1 *)puVar2 = 1;
      _swift_willThrow();
      return;
    }
    uVar8 = *(undefined8 *)*unaff_x20;
    *unaff_x20 = (long)((undefined8 *)*unaff_x20 + 1);
    unaff_x20[1] = unaff_x20[1] + -8;
    uVar4 = *param_1;
    uVar6 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar3 = 0;
      FUN_1005075b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar6 = *(ulong *)(uVar3 + 0x10);
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar6) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_1005075b4(uVar4,uVar6 + 1,1,uVar3);
      uVar3 = uVar4;
    }
    *(ulong *)(uVar3 + 0x10) = uVar6 + 1;
    *(undefined8 *)(uVar3 + uVar6 * 8 + 0x20) = uVar8;
    *param_1 = uVar3;
  }
LAB_1004fe1e8:
  *(undefined1 *)(unaff_x20 + 4) = 1;
  return;
}

