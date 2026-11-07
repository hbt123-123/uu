// rea decompile_all
// name: FUN_1006a1648
// address: 0x1006a1648
// body: available
// range: 0x1006a1648-0x1006a194f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a1648(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  void **ppvVar3;
  undefined8 ****ppppuVar4;
  void *pvVar5;
  uint uVar6;
  long lVar7;
  void *local_e8 [2];
  char local_d1;
  undefined8 ***local_d0;
  void *pvStack_c8;
  void *local_c0;
  undefined8 ***local_b0;
  void *pvStack_a8;
  undefined8 local_a0;
  long local_90;
  long *local_88;
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined *local_60;
  char local_58;
  
  local_60 = &DAT_100b2c568;
  local_58 = '\0';
  FUN_100696f64(&local_60);
  lVar2 = 0;
  _time();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100384eb8(&local_80,*param_2,param_2[1]);
  }
  else {
    uStack_78 = param_2[1];
    local_80 = (void *)*param_2;
    local_70 = param_2[2];
  }
  FUN_10069a9a4(&local_b0,&local_80,0);
  if (1 < (uint)local_b0) {
    FUN_10069a9a4(&local_b0,&local_80,0);
    if ((uint)local_b0 == 3) {
      FUN_10069bb58(&local_90,&local_80);
      lVar7 = local_90;
      while (lVar7 != 0) {
        local_90 = lVar7;
        FUN_100699d54(lVar7,0);
        if ((lVar7 < lVar2) && (*(long *)(param_1 + 0x250) < lVar2 - lVar7)) {
          FUN_10069ada4(&local_b0,local_90,0);
          if ((uint)local_b0 == 2) {
            FUN_10069c85c(&local_b0,local_90);
            FUN_1006928dc(local_e8,".");
            ppvVar3 = local_e8;
            std::string::append((char *)ppvVar3);
            local_c0 = ppvVar3[2];
            pvStack_c8 = ppvVar3[1];
            local_d0 = *ppvVar3;
            ppvVar3[1] = (void *)0x0;
            ppvVar3[2] = (void *)0x0;
            *ppvVar3 = (void *)0x0;
            ppppuVar4 = &local_b0;
            FUN_1006a4b0c(ppppuVar4,&local_d0);
            if ((long)local_c0 < 0) {
              operator_delete(local_d0);
            }
            if (local_d1 < '\0') {
              operator_delete(local_e8[0]);
            }
            if ((long)local_a0 < 0) {
              operator_delete(local_b0);
            }
            if ((int)ppppuVar4 == 0) {
              FUN_10069a560(local_90,0);
            }
          }
          FUN_10069ada4(&local_b0,local_90,0);
          if ((uint)local_b0 == 3) {
            FUN_10069cde4(&local_d0,local_90);
            if ((long)local_c0 < 0) {
              FUN_100384eb8(&local_b0,local_d0,pvStack_c8);
              if ((long)local_c0 < 0) {
                operator_delete(local_d0);
              }
            }
            else {
              pvStack_a8 = pvStack_c8;
              local_b0 = local_d0;
              local_a0 = local_c0;
            }
            uVar6 = (uint)(char)local_a0._7_1_;
            if ((long)local_a0 < 0) {
              ppppuVar4 = (undefined8 ****)local_b0;
              if (pvStack_a8 == (void *)0x8) goto LAB_1006a1870;
LAB_1006a18a8:
              operator_delete(local_b0);
            }
            else if (local_a0._7_1_ == '\b') {
              ppppuVar4 = &local_b0;
LAB_1006a1870:
              lVar7 = 0;
              do {
                pvVar5 = _memchr("0123456789",(int)*(char *)((long)ppppuVar4 + lVar7),10);
                if (pvVar5 == (void *)0x0) goto LAB_1006a18a4;
                lVar7 = lVar7 + 1;
              } while (lVar7 != 8);
              FUN_10069a6ac(local_90,0);
              uVar6 = (uint)local_a0._7_1_;
LAB_1006a18a4:
              if ((uVar6 >> 7 & 1) != 0) goto LAB_1006a18a8;
            }
          }
        }
        FUN_10069b24c(&local_90,0);
        lVar7 = local_90;
      }
      if (local_88 != (long *)0x0) {
        LOAcquire();
        iVar1 = (int)local_88[1];
        *(int *)(local_88 + 1) = iVar1 + -1;
        LORelease();
        if (iVar1 == 1) {
          (**(code **)(*local_88 + 0x10))(local_88);
          LOAcquire();
          iVar1 = *(int *)((long)local_88 + 0xc);
          *(int *)((long)local_88 + 0xc) = iVar1 + -1;
          LORelease();
          if (iVar1 == 1) {
            (**(code **)(*local_88 + 0x18))(local_88);
          }
        }
      }
    }
  }
  if (local_70 < 0) {
    operator_delete(local_80);
  }
  if (local_58 == '\x01') {
    FUN_1006972a0(&local_60);
  }
  return;
}

