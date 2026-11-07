// rea decompile_all
// name: FUN_100647458
// address: 0x100647458
// body: available
// range: 0x100647458-0x1006476c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100647458(long param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  
  if (0 < param_1) {
    uVar6 = *unaff_x20;
    uVar2 = unaff_x20[1];
    puVar7 = unaff_x20 + 3;
    uVar8 = *puVar7;
    if ((char)unaff_x20[2] == '\0') {
      if (uVar6 == 0 && uVar2 == 0) {
        return;
      }
      if (uVar2 == 0) {
        if (param_1 == 1) {
          *unaff_x20 = 0;
          unaff_x20[1] = uVar6;
          *(undefined1 *)(unaff_x20 + 2) = 0;
          return;
        }
        lVar9 = param_1 + 1;
        if (SCARRY8(param_1,1)) goto LAB_100647644;
      }
      else {
        lVar9 = param_1 + 2;
        if (SCARRY8(param_1,2)) {
LAB_100647644:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100647648);
          (*pcVar3)();
        }
      }
      uVar5 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)uVar5 == 0) || ((long)(*(ulong *)(uVar8 + 0x18) >> 1) < lVar9)) {
        FUN_10062958c();
        uVar8 = uVar5;
      }
      *puVar7 = uVar8;
      FUN_10062872c(param_1,0);
      uVar4 = *puVar7;
      uVar8 = uVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = uVar4;
      if ((uVar8 & 1) == 0) {
        uVar5 = 0;
        FUN_10062958c(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
      }
      uVar8 = *(ulong *)(uVar5 + 0x10);
      lVar9 = uVar8 + 1;
      uVar4 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar8) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_10062958c(uVar4,lVar9,1,uVar5);
      }
      *(long *)(uVar4 + 0x10) = lVar9;
      *(ulong *)(uVar4 + uVar8 * 8 + 0x20) = uVar6;
      *puVar7 = uVar4;
      if (uVar2 != 0) {
        lVar1 = uVar8 + 2;
        uVar6 = uVar4;
        if ((long)(*(ulong *)(uVar4 + 0x18) >> 1) < lVar1) {
          uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
          FUN_10062958c(uVar6,lVar1,1,uVar4);
        }
        *(long *)(uVar6 + 0x10) = lVar1;
        *(ulong *)(uVar6 + lVar9 * 8 + 0x20) = uVar2;
        *puVar7 = uVar6;
      }
    }
    else {
      if ((char)unaff_x20[2] != '\x01') {
        if (*(long *)(uVar8 + 0x10) == 0) {
          return;
        }
        FUN_100633abc(0,0,param_1,0);
        return;
      }
      if (SBORROW8(uVar2,uVar6)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10064764c);
        (*pcVar3)();
      }
      uVar5 = param_1 + (uVar2 - uVar6);
      if (SCARRY8(param_1,uVar2 - uVar6)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100647650);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10062958c(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0,
                    PTR___swiftEmptyArrayStorage_100995ea0);
      FUN_10062872c(param_1,0);
      if ((long)uVar2 < (long)uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100647654);
        (*pcVar3)();
      }
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100647658);
        (*pcVar3)();
      }
      if ((*(ulong *)(uVar8 + 0x10) < uVar6) || ((long)*(ulong *)(uVar8 + 0x10) < (long)uVar2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10064765c);
        (*pcVar3)();
      }
      FUN_1006289c0(uVar8,uVar8 + 0x20,uVar6,uVar2 << 1 | 1);
      unaff_x20[3] = uVar4;
    }
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    *(undefined1 *)(unaff_x20 + 2) = 2;
  }
  return;
}

