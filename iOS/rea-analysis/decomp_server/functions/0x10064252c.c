// rea decompile_all
// name: FUN_10064252c
// address: 0x10064252c
// body: available
// range: 0x10064252c-0x100642873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064252c(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *unaff_x20;
  undefined *puVar10;
  ulong uVar11;
  undefined *local_68;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100642828);
    (*pcVar3)();
  }
  if (param_1 != 0) {
    param_2 = param_2 + 4;
    do {
      uVar11 = param_2 - 4;
      uVar8 = *unaff_x20;
      uVar7 = unaff_x20[1];
      if ((char)unaff_x20[2] == '\0') {
        if (uVar11 == 0) {
          *unaff_x20 = uVar8 + param_1;
        }
        else {
          if (uVar11 != 1) goto LAB_10064276c;
          unaff_x20[1] = uVar7 + param_1;
          uVar8 = uVar7;
        }
        bVar4 = CARRY8(uVar8,param_1);
        *(undefined1 *)(unaff_x20 + 2) = 0;
      }
      else {
        puVar10 = (undefined *)unaff_x20[3];
        if ((char)unaff_x20[2] == '\x01') {
          uVar2 = uVar7 - uVar8;
          if (SBORROW8(uVar7,uVar8)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100642800);
            (*pcVar3)();
          }
          if ((long)uVar2 <= (long)uVar11) {
LAB_10064276c:
            if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10064282c);
              (*pcVar3)();
            }
            FUN_100646ccc(param_2 + -3);
            if (*(ulong *)(unaff_x20[3] + 0x10) <= uVar11) {
              lVar1 = (param_2 - *(ulong *)(unaff_x20[3] + 0x10)) + -4;
              if (-1 < lVar1) {
                FUN_10062872c(lVar1,0);
                uVar11 = unaff_x20[3];
                uVar8 = uVar11;
                _swift_isUniquelyReferenced_nonNull_native();
                uVar7 = uVar11;
                if ((uVar8 & 1) == 0) {
                  uVar7 = 0;
                  FUN_10062958c(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
                }
                uVar8 = *(ulong *)(uVar7 + 0x10);
                uVar11 = uVar7;
                if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar8) {
                  uVar11 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
                  FUN_10062958c(uVar11,uVar8 + 1,1,uVar7);
                }
                *(ulong *)(uVar11 + 0x10) = uVar8 + 1;
                *(ulong *)(uVar11 + uVar8 * 8 + 0x20) = param_1;
                unaff_x20[3] = uVar11;
                return;
              }
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100642834);
              (*pcVar3)();
            }
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100642830);
            (*pcVar3)();
          }
          uVar9 = uVar8 + uVar11;
          if (SCARRY8(uVar8,uVar11)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100642808);
            (*pcVar3)();
          }
          if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10064280c);
            (*pcVar3)();
          }
          if (*(ulong *)(puVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100642810);
            (*pcVar3)();
          }
          bVar4 = CARRY8(*(ulong *)(puVar10 + uVar9 * 8 + 0x20),param_1);
          lVar1 = *(ulong *)(puVar10 + uVar9 * 8 + 0x20) + param_1;
          *unaff_x20 = 0;
          unaff_x20[1] = 0;
          *(undefined1 *)(unaff_x20 + 2) = 2;
          if ((long)uVar7 < (long)uVar8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100642814);
            (*pcVar3)();
          }
          if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100642818);
            (*pcVar3)();
          }
          uVar9 = *(ulong *)(puVar10 + 0x10);
          if ((uVar9 < uVar8) || ((long)uVar9 < (long)uVar7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10064281c);
            (*pcVar3)();
          }
          local_68 = puVar10;
          if (uVar9 != uVar2) {
            local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
            if (uVar7 != uVar8) {
              if (0 < (long)uVar2) {
                local_68 = &DAT_100ab7e10;
                FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
                _swift_allocObject();
                puVar6 = local_68;
                _malloc_size();
                puVar5 = puVar6 + -0x19;
                if (0x1f < (long)puVar6) {
                  puVar5 = puVar6 + -0x20;
                }
                *(ulong *)(local_68 + 0x10) = uVar2;
                *(long *)(local_68 + 0x18) = ((long)puVar5 >> 3) << 1;
              }
              _memcpy(local_68 + 0x20,puVar10 + uVar8 * 8 + 0x20,uVar2 * 8);
            }
            _swift_bridgeObjectRelease(puVar10);
          }
          if (*(ulong *)(local_68 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100642820);
            (*pcVar3)();
          }
          puVar10 = local_68;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar10 & 1) == 0) {
            FUN_1006541a4();
          }
          uVar8 = *(ulong *)(local_68 + 0x10);
          if (uVar8 <= uVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100642824);
            (*pcVar3)();
          }
          *(long *)(local_68 + param_2 * 8) = lVar1;
          unaff_x20[3] = (ulong)local_68;
          if ((lVar1 == 0) && (uVar11 == uVar8 - 1)) {
LAB_1006426a8:
            FUN_100645d2c();
          }
        }
        else {
          if (*(ulong *)(puVar10 + 0x10) <= uVar11) goto LAB_10064276c;
          bVar4 = CARRY8(*(ulong *)(puVar10 + param_2 * 8),param_1);
          lVar1 = *(ulong *)(puVar10 + param_2 * 8) + param_1;
          puVar5 = puVar10;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar5 & 1) == 0) {
            FUN_1006541a4();
          }
          uVar8 = *(ulong *)(puVar10 + 0x10);
          if (uVar8 <= uVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100642804);
            (*pcVar3)();
          }
          *(long *)(puVar10 + param_2 * 8) = lVar1;
          unaff_x20[3] = (ulong)puVar10;
          if (lVar1 == 0 && uVar11 == uVar8 - 1) goto LAB_1006426a8;
        }
      }
      param_2 = param_2 + 1;
      param_1 = 1;
    } while (bVar4);
  }
  return;
}

