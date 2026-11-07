// rea decompile_all
// name: FUN_1002503dc
// address: 0x1002503dc
// body: available
// range: 0x1002503dc-0x1002507b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1002503dc(long param_1,long param_2,uint param_3)

{
  uint len;
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  uLong uVar5;
  void *pvVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  size_t sVar14;
  Bytef *buf;
  
  if ((param_1 == 0) || (plVar7 = *(long **)(param_1 + 0x178), plVar7 == (long *)0x0)) {
    return -0x66;
  }
  if (*plVar7 == 0) {
    return -100;
  }
  if (param_3 == 0) {
LAB_100250798:
    iVar13 = 0;
  }
  else {
    plVar7[4] = param_2;
    *(uint *)(plVar7 + 5) = param_3;
    if ((int)plVar7[0x29] == 0) {
      uVar10 = plVar7[0x18];
      if (uVar10 < param_3) goto LAB_10025047c;
    }
    else if (plVar7[0x17] + (ulong)*(uint *)(plVar7 + 2) < (ulong)param_3) {
      uVar10 = (ulong)(*(uint *)(plVar7 + 2) + (int)plVar7[0x17]);
LAB_10025047c:
      *(int *)(plVar7 + 5) = (int)uVar10;
      if ((int)uVar10 == 0) goto LAB_100250798;
    }
    iVar13 = 0;
    do {
      uVar9 = *(uint *)(plVar7 + 2);
      if (uVar9 == 0) {
        pvVar6 = (void *)plVar7[1];
        if (pvVar6 == (void *)0x0) {
          sVar14 = 0;
LAB_1002504d4:
          uVar10 = 0x10000;
        }
        else {
          sVar14 = *plVar7 + (0x10000 - (long)pvVar6);
          if (sVar14 == 0) goto LAB_1002504d4;
          uVar10 = 0x10000 - sVar14;
          _memcpy((void *)*plVar7,pvVar6,sVar14);
          plVar7 = *(long **)(param_1 + 0x178);
        }
        uVar8 = plVar7[0x17] & 0xffffffff;
        if (uVar10 <= (ulong)plVar7[0x17]) {
          uVar8 = uVar10;
        }
        if (uVar8 != 0) {
          uVar10 = 0;
          do {
            plVar3 = plVar7 + 0x19;
            FUN_10024e8ac(plVar3,plVar7[0x26],plVar7[0x28] + plVar7[0xf],0);
            if (plVar3 != (long *)0x0) {
              return -1;
            }
            plVar7 = *(long **)(param_1 + 0x178);
            lVar4 = plVar7[0x21];
            (*(code *)plVar7[0x1b])(lVar4,plVar7[0x26],*plVar7 + sVar14 + uVar10,uVar8 - uVar10);
            plVar7 = *(long **)(param_1 + 0x178);
            plVar7[0xf] = plVar7[0xf] + lVar4;
            if (lVar4 == 0) {
              lVar12 = plVar7[0x21];
              (*(code *)plVar7[0x20])(lVar12,plVar7[0x26]);
              if ((int)lVar12 != 0) {
                return -1;
              }
              lVar12 = param_1;
              FUN_1002507b4();
              if ((int)lVar12 != 0) {
                return -1;
              }
              plVar7 = *(long **)(param_1 + 0x178);
              plVar7[0xf] = 0;
              plVar7[0x26] = *(long *)(param_1 + 0x68);
            }
            uVar10 = lVar4 + uVar10;
          } while (uVar10 != uVar8);
        }
        if ((((*(byte *)(param_1 + 0xe0) & 1) != 0) && (*(long *)(param_1 + 0x1a0) != 0)) &&
           (uVar8 != 0)) {
          uVar10 = 0;
          do {
            lVar4 = *(long *)(param_1 + 0x1a0);
            uVar9 = (uint)*(byte *)(**(long **)(param_1 + 0x178) + uVar10) ^
                    (*(uint *)(param_1 + 0x198) & 0xfffd ^ 3) * (*(uint *)(param_1 + 0x198) | 2) >>
                    8;
            uVar1 = (undefined1)uVar9;
            *(undefined1 *)(**(long **)(param_1 + 0x178) + uVar10) = uVar1;
            uVar11 = *(ulong *)(lVar4 + ((ulong)(uVar9 ^ (uint)*(ulong *)(param_1 + 0x188)) & 0xff)
                                        * 8) ^ *(ulong *)(param_1 + 0x188) >> 8;
            lVar12 = (*(long *)(param_1 + 400) + (uVar11 & 0xff)) * 0x8088405 + 1;
            *(ulong *)(param_1 + 0x188) = uVar11;
            *(long *)(param_1 + 400) = lVar12;
            *(ulong *)(param_1 + 0x198) =
                 *(ulong *)(lVar4 + ((ulong)((uint)*(ulong *)(param_1 + 0x198) ^
                                            (uint)lVar12 >> 0x18) & 0xff) * 8) ^
                 *(ulong *)(param_1 + 0x198) >> 8;
            *(undefined1 *)(**(long **)(param_1 + 0x178) + uVar10) = uVar1;
            uVar10 = uVar10 + 1;
          } while ((uVar10 & 0xffffffff) < uVar8);
          plVar7 = *(long **)(param_1 + 0x178);
        }
        plVar7[0x17] = plVar7[0x17] - uVar8;
        plVar7[1] = *plVar7;
        uVar9 = (int)uVar8 + (int)sVar14;
        *(uint *)(plVar7 + 2) = uVar9;
      }
      if ((plVar7[0x27] == 0) || ((int)plVar7[0x29] != 0)) {
        if ((uVar9 == 0) && (plVar7[0x17] == 0)) {
          return iVar13;
        }
        len = *(uint *)(plVar7 + 5);
        if (uVar9 <= *(uint *)(plVar7 + 5)) {
          len = uVar9;
        }
        uVar10 = (ulong)len;
        if (len == 0) {
          uVar10 = 0;
        }
        else {
          uVar8 = 0;
          do {
            *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x178) + 0x20) + uVar8) =
                 *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x178) + 8) + uVar8);
            uVar8 = uVar8 + 1;
          } while (uVar10 != uVar8);
          plVar7 = *(long **)(param_1 + 0x178);
        }
        plVar7[0x14] = plVar7[0x14] + uVar10;
        plVar7[0x18] = plVar7[0x18] - uVar10;
        uVar5 = _crc32(plVar7[0x15],(Bytef *)plVar7[4],len);
        plVar7 = *(long **)(param_1 + 0x178);
        plVar7[0x15] = uVar5;
        *(uint *)(plVar7 + 2) = (int)plVar7[2] - len;
        *(uint *)(plVar7 + 5) = (int)plVar7[5] - len;
        plVar7[4] = plVar7[4] + uVar10;
        plVar7[1] = plVar7[1] + uVar10;
        plVar7[6] = plVar7[6] + uVar10;
        iVar13 = len + iVar13;
      }
      else if (plVar7[0x27] != 0xc) {
        lVar12 = plVar7[6];
        buf = (Bytef *)plVar7[4];
        iVar2 = _inflate((z_streamp)(plVar7 + 1),2);
        lVar4 = *(long *)(param_1 + 0x178);
        if ((-1 < iVar2) && (*(long *)(lVar4 + 0x38) != 0)) {
          iVar2 = -3;
        }
        lVar12 = *(long *)(lVar4 + 0x30) - lVar12;
        *(long *)(lVar4 + 0xa0) = *(long *)(lVar4 + 0xa0) + lVar12;
        *(long *)(lVar4 + 0xc0) = *(long *)(lVar4 + 0xc0) - lVar12;
        uVar5 = _crc32(*(uLong *)(lVar4 + 0xa8),buf,(uInt)lVar12);
        plVar7 = *(long **)(param_1 + 0x178);
        plVar7[0x15] = uVar5;
        iVar13 = iVar13 + (uInt)lVar12;
        if (iVar2 != 0) {
          if (iVar2 == 1) {
            return iVar13;
          }
          return iVar2;
        }
      }
    } while ((int)plVar7[5] != 0);
  }
  return iVar13;
}

