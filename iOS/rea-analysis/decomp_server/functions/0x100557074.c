// rea decompile_all
// name: FUN_100557074
// address: 0x100557074
// body: available
// range: 0x100557074-0x10055736b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100557074(byte *param_1,long param_2,ulong *param_3)

{
  byte bVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  if ((param_1 != (byte *)0x0) && (param_2 = param_2 - (long)param_1, 0 < param_2)) {
    do {
      bVar1 = *param_1;
      uVar6 = (uint)bVar1;
      if (bVar1 < 0xc) {
        if (uVar6 != 9 && 8 < bVar1) {
          if (uVar6 == 10) {
            pcVar2 = "\\n";
          }
          else {
            if (uVar6 != 0xb) goto LAB_10055717c;
            pcVar2 = "\\v";
          }
          goto LAB_1005570c0;
        }
        if (uVar6 == 8) {
          pcVar2 = "\\b";
          goto LAB_1005570c0;
        }
        if (uVar6 == 9) {
          pcVar2 = "\\t";
          goto LAB_1005570c0;
        }
LAB_10055717c:
        uVar5 = *param_3;
        uVar3 = uVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        *param_3 = uVar5;
        if (uVar6 - 0x7f < 0xffffffa1) {
          uVar4 = uVar5;
          if ((uVar3 & 1) == 0) {
            uVar4 = 0;
            FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
            *param_3 = uVar4;
          }
          uVar3 = *(ulong *)(uVar4 + 0x10);
          uVar5 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            FUN_100506f84(uVar5,uVar3 + 1,1,uVar4);
            *param_3 = uVar5;
          }
          *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
          *(undefined1 *)(uVar5 + uVar3 + 0x20) = 0x5c;
          uVar5 = *param_3;
          uVar3 = *(ulong *)(uVar5 + 0x10);
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            FUN_100506f84(uVar5,uVar3 + 1,1);
            *param_3 = uVar5;
          }
          *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
          *(byte *)(uVar5 + uVar3 + 0x20) = bVar1 >> 6 | 0x30;
          uVar5 = *param_3;
          uVar3 = *(ulong *)(uVar5 + 0x10);
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            FUN_100506f84(uVar5,uVar3 + 1,1);
            *param_3 = uVar5;
          }
          *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
          *(byte *)(uVar5 + uVar3 + 0x20) = bVar1 >> 3 & 7 | 0x30;
          uVar5 = *param_3;
          uVar3 = *(ulong *)(uVar5 + 0x10);
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            FUN_100506f84(uVar5,uVar3 + 1,1);
            *param_3 = uVar5;
          }
          *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
          *(byte *)(uVar5 + uVar3 + 0x20) = bVar1 & 7 | 0x30;
        }
        else {
          uVar4 = uVar5;
          if ((uVar3 & 1) == 0) {
            uVar4 = 0;
            FUN_100506f84(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
            *param_3 = uVar4;
          }
          uVar3 = *(ulong *)(uVar4 + 0x10);
          uVar5 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            FUN_100506f84(uVar5,uVar3 + 1,1,uVar4);
            *param_3 = uVar5;
          }
          *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
          *(byte *)(uVar5 + uVar3 + 0x20) = bVar1;
        }
      }
      else {
        if (uVar6 == 0x21 || bVar1 < 0x21) {
          if (uVar6 == 0xc) {
            pcVar2 = "\\f";
          }
          else {
            if (uVar6 != 0xd) goto LAB_10055717c;
            pcVar2 = "\\r";
          }
        }
        else if (uVar6 == 0x22) {
          pcVar2 = "\\\"";
        }
        else {
          if (uVar6 != 0x5c) goto LAB_10055717c;
          pcVar2 = "\\\\";
        }
LAB_1005570c0:
        FUN_1004f9e80(pcVar2,2);
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

